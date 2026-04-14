@class NSURL;

@interface PFMediaStreamedAssetCache : NSObject <PFStreamedAssetCache> {
    void /* unknown type, empty encoding */ sourceURL;
    void /* unknown type, empty encoding */ cacheLocation;
    void /* unknown type, empty encoding */ sourceURLMD5;
    void /* unknown type, empty encoding */ phase;
}

@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic, readonly) NSURL *cacheLocation;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ purgeability;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSourceURL:(id)a0;
- (id)cachedAssetURL;
- (BOOL)completeAndReturnError:(id *)a0;
- (id)initWithSourceURL:(id)a0 cacheLocation:(id)a1 purgeability:(int)a2;
- (id)persistentFileURL;
- (id)streamCacheURLAndReturnError:(id *)a0;

@end
