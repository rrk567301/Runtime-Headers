@class NSDictionary;

@interface CSTrialAssetManager : NSObject {
    NSDictionary *_trialClientDict;
}

+ (id)sharedInstance;

- (void)getInstalledAssetofType:(unsigned long long)a0 forLocale:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
