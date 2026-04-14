@class NSCache;

@interface AMSMonitoredAccountStoreProxyStore : NSObject

@property (class, readonly) NSCache *backingStore;

+ (id)accountStoreForMediaType:(id)a0;
+ (id)mediaTypeForAccountStore:(id)a0;

@end
