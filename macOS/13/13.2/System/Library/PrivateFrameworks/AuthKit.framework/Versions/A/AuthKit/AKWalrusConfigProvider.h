@class AKWalrusConfig;

@interface AKWalrusConfigProvider : NSObject

@property (readonly, nonatomic) AKWalrusConfig *cachedConfig;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)getWalrusConfigWithCompletion:(id /* block */)a0;
- (id)_extractWalrusConfigWithAccountCountry:(id)a0 fromGlobalConfig:(id)a1;

@end
