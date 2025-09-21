@class CALayer, NSString, NSArray;

@interface CAMatchMoveAnimation : CAAnimation

@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property unsigned int sourceContextId;
@property (copy) NSString *keyPath;
@property char targetsSuperlayer;
@property (copy) NSArray *sourcePoints;
@property char usesNormalizedCoordinates;
@property char appliesX;
@property char appliesY;
@property char appliesScale;
@property char appliesRotation;
@property (getter=isAdditive) char additive;

+ (id)defaultValueForKey:(id)a0;
+ (id)CA_attributes;

- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (char)CA_validateValue:(id)a0 forKey:(id)a1;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (char)_setCARenderAnimation:(void *)a0 layer:(id)a1;

@end
