@class AMSThreadSafeDictionary;

@interface AMSAccountStoreCache : NSObject

@property (class, readonly) AMSThreadSafeDictionary *cache;

+ (id)accountStoreForMediaType:(id)a0;
+ (id)mediaTypeForAccountStore:(id)a0;
+ (void)_resetAccountStoreCache;

@end
