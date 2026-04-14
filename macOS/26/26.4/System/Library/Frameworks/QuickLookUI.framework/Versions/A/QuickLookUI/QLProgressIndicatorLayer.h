@class NSString, CALayer;

@interface QLProgressIndicatorLayer : CALayer <CALayerDelegate> {
    CALayer *_contentLayer;
    CALayer *_maskLayer;
    CALayer *_fillLayer;
    struct CGColor { } *_nonSemanticColor;
    BOOL _isDark;
}

@property (nonatomic) double progressValue;
@property (readonly) BOOL isDeterminate;
@property (readonly) long long numberOfBars;
@property (nonatomic) BOOL circular;
@property BOOL animates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultActionForKey:(id)a0;
+ (id)keyPathsForValuesAffectingIsDeterminate;

- (void)setContentsScale:(double)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)dealloc;
- (void)_setDeterminate:(BOOL)a0;
- (struct CGColor { } *)nonSemanticColor;
- (void)set_QLLayerAppearance:(id)a0;

@end
