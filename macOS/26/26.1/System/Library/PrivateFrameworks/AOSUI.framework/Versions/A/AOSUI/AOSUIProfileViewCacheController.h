@class NSString, NSArray, NSData;

@interface AOSUIProfileViewCacheController : NSObject

@property (retain) NSString *cachePath;
@property BOOL cacheIsValid;
@property BOOL cacheHideOverLay;
@property (retain) NSArray *cachePrefToHide;
@property (retain) NSData *cacheImageData;

+ (id)_cacheQueue;

- (void).cxx_destruct;
- (id)init;
- (BOOL)readCache;
- (id)_currentLanguage;
- (void)writeCacheWithCompletion:(id /* block */)a0;

@end
