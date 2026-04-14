@class NSMutableDictionary;

@interface CUIPSDLayerEffects : NSObject

@property BOOL visible;
@property double effectScale;
@property (retain) NSMutableDictionary *effectList;

- (void)dealloc;
- (id)init;
- (id)colorOverlay;
- (void)addLayerEffectComponent:(id)a0;
- (id)dropShadow;

@end
