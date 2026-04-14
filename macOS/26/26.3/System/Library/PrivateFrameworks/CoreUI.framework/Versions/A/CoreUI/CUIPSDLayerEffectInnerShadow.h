@class CUIColor;

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent

@property int blendMode;
@property double opacity;
@property (retain) CUIColor *color;
@property short angle;
@property unsigned long long distance;
@property unsigned long long blurSize;

- (id)init;
- (unsigned int)effectType;
- (void)dealloc;
- (id)initWithEffectFromPreset:(id)a0 atIndex:(unsigned int)a1;
- (BOOL)updateLayerEffectPreset:(id)a0 error:(id *)a1;

@end
