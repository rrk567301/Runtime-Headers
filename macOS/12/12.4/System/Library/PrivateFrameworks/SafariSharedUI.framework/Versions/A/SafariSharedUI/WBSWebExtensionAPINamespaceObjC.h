@class WBSWebExtensionAPIExtensionObjC, WBSWebExtensionAPIStorageObjC, WBSWebExtensionAPIWebRequestObjC, WBSWebExtensionAPITabsObjC, WBSWebExtensionAPIActionObjC, WBSWebExtensionAPIAlarmsObjC, WBSWebExtensionAPIContextMenusObjC, WBSWebExtensionAPIWebNavigationObjC, WBSWebExtensionAPILocalizationObjC, WBSWebExtensionAPINotificationsObjC, WBSWebExtensionAPIPermissionsObjC, WBSWebExtensionAPICookiesObjC, WBSWebExtensionAPIDevToolsObjC, WBSWebExtensionAPIDeclarativeNetRequestObjC, WBSWebExtensionAPIRuntimeObjC, WBSWebExtensionAPICommandsObjC, WBSWebExtensionAPIWindowsObjC, WBSWebExtensionAPIScriptingObjC;

@interface WBSWebExtensionAPINamespaceObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIExtensionObjC *_extension;
    WBSWebExtensionAPIRuntimeObjC *_runtime;
    WBSWebExtensionAPIActionObjC *_browserAction;
    WBSWebExtensionAPIActionObjC *_pageAction;
    WBSWebExtensionAPIPermissionsObjC *_permissions;
    WBSWebExtensionAPITabsObjC *_tabs;
    WBSWebExtensionAPIWindowsObjC *_windows;
    WBSWebExtensionAPILocalizationObjC *_i18n;
    WBSWebExtensionAPIStorageObjC *_storage;
    WBSWebExtensionAPICommandsObjC *_commands;
    WBSWebExtensionAPIContextMenusObjC *_contextMenus;
    WBSWebExtensionAPINotificationsObjC *_notifications;
    WBSWebExtensionAPIWebNavigationObjC *_webNavigation;
    WBSWebExtensionAPIWebRequestObjC *_webRequest;
    WBSWebExtensionAPIAlarmsObjC *_alarms;
    WBSWebExtensionAPICookiesObjC *_cookies;
    WBSWebExtensionAPIDeclarativeNetRequestObjC *_declarativeNetRequest;
    WBSWebExtensionAPIDevToolsObjC *_devtools;
    WBSWebExtensionAPIActionObjC *_action;
    WBSWebExtensionAPIScriptingObjC *_scripting;
}

@property (readonly, nonatomic) WBSWebExtensionAPIRuntimeObjC *runtime;

- (void).cxx_destruct;

@end
