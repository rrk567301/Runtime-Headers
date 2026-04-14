@interface CLSCurationModelSpecification : NSObject <NSCopying>

@property (readonly) unsigned long long sceneAnalysisVersion;
@property (readonly) unsigned long long mediaAnalysisVersion;
@property (readonly) unsigned long long faceAnalysisVersion;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAsset:(id)a0;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0 mediaAnalysisVersion:(unsigned long long)a1 faceAnalysisVersion:(unsigned long long)a2;
- (id)initWithItemInfo:(id)a0 options:(id)a1;

@end
