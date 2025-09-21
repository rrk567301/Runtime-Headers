@class NSString, CALayer;

@interface QLProgressIndicatorLayer : CALayer <CALayerDelegate> {
    CALayer *_contentLayer;
    CALayer *_maskLayer;
    CALayer *_fillLayer;
    struct CGColor { } *_nonSemanticColor;
    char _isDark;
}

@property (nonatomic) double progressValue;
@property (readonly) char isDeterminate;
@property (readonly) long long numberOfBars;
@property (nonatomic) char circular;
@property char animates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultActionForKey:(id)a0;
+ (id)keyPathsForValuesAffectingIsDeterminate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)setContentsScale:(double)a0;
- (void)_setDeterminate:(char)a0;
- (struct CGColor { } *)nonSemanticColor;
- (void)set_QLLayerAppearance:(id)a0;

@end
