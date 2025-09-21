@class IKComposer, IKImageLayer, IKKnobLayer;

@interface IKPastedImage : CALayer {
    IKKnobLayer *_knobLayer;
    IKComposer *_composer;
    IKImageLayer *_imageLayer;
    char _selected;
}

@property (retain) id image;

+ (id)defaultActionForKey:(id)a0;
+ (double)fadeDuration;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)knobLayer;
- (char)selected;
- (void)setSelected:(char)a0;
- (void)applyInContext:(struct CGContext { } *)a0;
- (void)beginMouseOperation;
- (unsigned int)defaultKnob;
- (void)endMouseOperation;
- (void)ikMouseDown:(id)a0;
- (char)isPasteboardLayer;
- (unsigned int)knobLayerFlags;
- (void)setSupportsUndo:(char)a0;
- (void)setup:(id)a0;
- (char)supportsUndo;

@end
