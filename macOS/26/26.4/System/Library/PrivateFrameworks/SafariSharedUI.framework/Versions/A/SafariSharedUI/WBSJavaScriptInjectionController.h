@class WBSUserScriptProvider, WKContentWorld;

@interface WBSJavaScriptInjectionController : NSObject

@property (nonatomic, retain) WKContentWorld *contentWorld;
@property (nonatomic, readonly) WBSUserScriptProvider *userScriptProvider;

+ (void)addAllInjectionControllerScriptsToUserContentController:(id)a0 inPrivateBrowsing:(BOOL)a1;

- (void).cxx_destruct;
- (id)init;
- (void)addUserScriptsToUserContentController:(id)a0;
- (id)initWithUserScriptProvider:(id)a0 contentWorld:(id)a1;

@end
