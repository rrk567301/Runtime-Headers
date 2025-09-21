@interface CLSCurationModelSpecification : NSObject <NSCopying>

@property (readonly) unsigned long long sceneAnalysisVersion;
@property (readonly) unsigned long long mediaAnalysisVersion;
@property (readonly) unsigned long long faceAnalysisVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)initWithItemInfo:(id)a0 options:(id)a1;
- (id)initWithSceneAnalysisVersion:(unsigned long long)a0 mediaAnalysisVersion:(unsigned long long)a1 faceAnalysisVersion:(unsigned long long)a2;

@end
