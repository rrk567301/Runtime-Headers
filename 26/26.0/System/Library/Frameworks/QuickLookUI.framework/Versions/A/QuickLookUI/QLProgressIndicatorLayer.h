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

- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)_setDeterminate:(BOOL)a0;
- (struct CGColor { } *)nonSemanticColor;
- (void)set_QLLayerAppearance:(id)a0;

@end
