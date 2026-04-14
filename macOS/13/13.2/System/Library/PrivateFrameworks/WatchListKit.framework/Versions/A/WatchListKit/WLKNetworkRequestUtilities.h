@interface WLKNetworkRequestUtilities : NSObject

+ (id)defaultSessionConfiguration;
+ (void)startNetworkRequest:(id)a0 account:(id)a1 sessionConfiguration:(id)a2 options:(long long)a3 completion:(id /* block */)a4;
+ (id)configurationBaseURLString;
+ (id)_defaultAppSessionConfiguration;
+ (id)_sharedCacheSessionConfiguration;
+ (BOOL)isGDPRAccepted;

@end
