@class NSURL;

@interface SSUMatcherBuildParams : NSObject <NSCopying>

@property (readonly) NSURL *modelAssetsDirectoryURL;
@property (readonly) NSURL *datasetAssetsDirectoryURL;
@property (readonly) NSURL *cacheDirectoryURL;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithModelAssetsDirectoryURL:(id)a0 datasetAssetsDirectoryURL:(id)a1 cacheDirectoryURL:(id)a2;

@end
