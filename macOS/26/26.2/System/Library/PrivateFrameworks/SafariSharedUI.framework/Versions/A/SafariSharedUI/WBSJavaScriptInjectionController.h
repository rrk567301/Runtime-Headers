@class NSSet, WKContentWorld, WBSUserScriptProvider;

@interface WBSJavaScriptInjectionController : NSObject {
    void /* function */ configuredUserContentControllers;
}

@property (nonatomic, retain) WKContentWorld *contentWorld;
@property (nonatomic, copy) NSSet *configuredUserContentControllers;
@property (nonatomic, readonly) WBSUserScriptProvider *userScriptProvider;

+ (void)addAllInjectionControllerScriptsToUserContentController:(id)a0 inPrivateBrowsing:(BOOL)a1;

- (void).cxx_destruct;
- (id)init;
- (void)addUserScriptsToUserContentController:(id)a0;
- (id)initWithUserScriptProvider:(id)a0 contentWorld:(id)a1;

@end
