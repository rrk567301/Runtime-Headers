@interface CSTrialAssetManager : NSObject

+ (id)sharedInstance;

- (void)getInstalledAssetofType:(unsigned long long)a0 forLocale:(id)a1 completion:(id /* block */)a2;

@end
