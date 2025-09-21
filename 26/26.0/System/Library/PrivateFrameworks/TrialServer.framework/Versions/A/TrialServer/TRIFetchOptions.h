@class NSNumber, TRIDownloadOptions;

@interface TRIFetchOptions : NSObject <NSCopying>

@property (readonly, nonatomic) TRIDownloadOptions *downloadOptions;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;

+ (id)optionsWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;

- (id)copyWithReplacementCacheDeleteAvailableSpaceClass:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDownloadOptions:(id)a0 cacheDeleteAvailableSpaceClass:(id)a1;
- (id)description;
- (id)copyWithReplacementDownloadOptions:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (void).cxx_destruct;

@end
