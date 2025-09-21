@class FigAlternateObjCVideoLayoutAttributes;

@interface AVAssetVariantVideoLayoutAttributes : NSObject {
    FigAlternateObjCVideoLayoutAttributes *_figVideoLayoutAttributes;
}

@property (readonly, nonatomic) unsigned long long packingType;
@property (readonly, nonatomic) unsigned long long stereoViewComponents;
@property (readonly, nonatomic) unsigned long long projectionType;

- (void)dealloc;
- (id)description;
- (id)initWithFigVideoLayoutAttributes:(id)a0;

@end
