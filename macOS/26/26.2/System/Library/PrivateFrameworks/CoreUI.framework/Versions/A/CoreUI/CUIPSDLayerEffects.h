@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject

@property BOOL visible;
@property double effectScale;
@property (retain) NSMutableDictionary *effectList;

- (id)init;
- (void)dealloc;
- (void)addLayerEffectComponent:(id)a0;
- (id)colorOverlay;
- (id)dropShadow;

@end
