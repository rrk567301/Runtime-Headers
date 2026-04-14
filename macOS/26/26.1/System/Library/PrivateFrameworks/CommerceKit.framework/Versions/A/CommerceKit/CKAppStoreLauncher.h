@class NSMutableDictionary;

@interface CKAppStoreLauncher : NSObject {
    NSMutableDictionary *_validURLs;
}

+ (id)sharedInstance;
+ (void)validateLaunchURL:(id)a0 withResultBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (id)init;
- (id)_validateLaunchURL:(id)a0;
- (void)launchAppStoreWithURL:(id)a0;

@end
