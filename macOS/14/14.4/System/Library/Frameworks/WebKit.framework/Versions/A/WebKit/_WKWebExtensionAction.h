@class NSString, NSArray, _WKWebExtensionContext, WKWebView;
@protocol _WKWebExtensionTab;

@interface _WKWebExtensionAction : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebExtensionAction> { struct type { unsigned char __lx[112]; } data; } _webExtensionAction;
}

@property (readonly, nonatomic) void *_webExtensionAction;
@property (readonly, weak, nonatomic) _WKWebExtensionContext *webExtensionContext;
@property (readonly, weak, nonatomic) id<_WKWebExtensionTab> associatedTab;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *badgeText;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSArray *menuItems;
@property (readonly, nonatomic) BOOL presentsPopup;
@property (readonly, nonatomic) WKWebView *popupWebView;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
