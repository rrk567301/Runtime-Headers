@class IKComposer, IKImageLayer, IKKnobLayer;

@interface IKPastedImage : CALayer {
    IKKnobLayer *_knobLayer;
    IKComposer *_composer;
    IKImageLayer *_imageLayer;
    BOOL _selected;
}

@property (retain) id image;

+ (double)fadeDuration;
+ (id)defaultActionForKey:(id)a0;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)selected;
- (void)setSelected:(BOOL)a0;
- (id)knobLayer;
- (void)setup:(id)a0;
- (void)ikMouseDown:(id)a0;
- (void)beginMouseOperation;
- (void)endMouseOperation;
- (BOOL)supportsUndo;
- (BOOL)isPasteboardLayer;
- (unsigned int)defaultKnob;
- (void)setSupportsUndo:(BOOL)a0;
- (void)applyInContext:(struct CGContext { } *)a0;
- (unsigned int)knobLayerFlags;

@end
