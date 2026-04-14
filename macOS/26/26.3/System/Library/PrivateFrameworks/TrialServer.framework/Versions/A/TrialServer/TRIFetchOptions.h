@class NSNumber, TRIDownloadOptions;

@interface TRIFetchOptions : NSObject <NSCopying>

@property (readonly, nonatomic) TRIDownloadOptions *downloadOptions;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;

+ (id)optionsWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;

- (BOOL)isEqualToOptions:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithReplacementDownloadOptions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementCacheDeleteAvailableSpaceClass:(id)a0;

@end
