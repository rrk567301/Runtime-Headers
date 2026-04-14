@class AMSThreadSafeDictionary;

@interface AMSAccountStoreCache : NSObject

@property (class, readonly) AMSThreadSafeDictionary *cache;

+ (void)_resetAccountStoreCache;
+ (id)mediaTypeForAccountStore:(id)a0;
+ (id)accountStoreForMediaType:(id)a0;

@end
