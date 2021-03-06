#include "declarativewebpage.h"

static const QString gFullScreenMessage("embed:fullscreenchanged");
static const QString gDomContentLoadedMessage("embed:domcontentloaded");

static const QString gLinkAddedMessage("chrome:linkadded");
static const QString gAlertMessage("embed:alert");
static const QString gConfirmMessage("embed:confirm");
static const QString gPromptMessage("embed:prompt");
static const QString gAuthMessage("embed:auth");
static const QString gLoginMessage("embed:login");
static const QString gFindMessage("embed:find");
static const QString gPermissionsMessage("embed:permissions");
static const QString gContextMenuMessage("Content:ContextMenu");
static const QString gSelectionRangeMessage("Content:SelectionRange");
static const QString gSelectionCopiedMessage("Content:SelectionCopied");
static const QString gSelectAsyncMessage("embed:selectasync");
static const QString gFilePickerMessage("embed:filepicker");

DeclarativeWebPage::DeclarativeWebPage(QObject *parent)
    : QOpenGLWebPage(parent)
{
    addMessageListener(gFullScreenMessage);
    addMessageListener(gDomContentLoadedMessage);

    addMessageListener(gLinkAddedMessage);
    addMessageListener(gAlertMessage);
    addMessageListener(gConfirmMessage);
    addMessageListener(gPromptMessage);
    addMessageListener(gAuthMessage);
    addMessageListener(gLoginMessage);
    addMessageListener(gFindMessage);
    addMessageListener(gPermissionsMessage);
    addMessageListener(gContextMenuMessage);
    addMessageListener(gSelectionRangeMessage);
    addMessageListener(gSelectionCopiedMessage);
    addMessageListener(gSelectAsyncMessage);
    addMessageListener(gFilePickerMessage);

    loadFrameScript("chrome://embedlite/content/SelectAsyncHelper.js");
    loadFrameScript("chrome://embedlite/content/embedhelper.js");
}
