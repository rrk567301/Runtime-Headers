@interface DMCLazyInitializationUtilities : NSObject

+ (void)loadBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)loadNSBundleAtURL:(id)a0 completionBlock:(id /* block */)a1;
+ (void)initSpringBoardServices;
+ (void)initSetupAssistant;
+ (void)initAuthKit;

@end
