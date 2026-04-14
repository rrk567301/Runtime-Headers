@class AMSThreadSafeDictionary;

@interface AMSAccountStoreCache : NSObject

@property (class, readonly) AMSThreadSafeDictionary *cache;

+ (id)mediaTypeForAccountStore:(id)a0;
+ (void)_resetAccountStoreCache;
+ (id)accountStoreForMediaType:(id)a0;

@end
