@class IKComposer;

@interface IKImagePasteboardLayer : CALayer {
    IKComposer *_composer;
}

+ (double)fadeDuration;
+ (id)addImagePasteLayer:(id)a0;
+ (char)canPaste;
+ (id)imageDataFromPasteboard;
+ (char)registerLayerWithView:(id)a0;

- (void)applyInContext:(struct CGContext { } *)a0;
- (void)addImageFromPasteboard:(id)a0;
- (void)applyPaste;
- (void)clearPastedImage;
- (void)doAddPastedImage:(id)a0 select:(char)a1;
- (void)doRemovePastedImage:(id)a0;
- (char)ikKeyDown:(id)a0;
- (void)ikMouseDown:(id)a0;
- (void)mouseDownOutsideSelection:(id)a0;
- (void)selectLayer:(id)a0 extendSelection:(char)a1;
- (void)setup:(id)a0;
- (void)willApply;

@end
