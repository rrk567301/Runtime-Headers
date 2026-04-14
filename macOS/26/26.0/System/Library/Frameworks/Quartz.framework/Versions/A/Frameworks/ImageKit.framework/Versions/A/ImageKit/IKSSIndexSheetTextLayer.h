@class NSString, NSDictionary;

@interface IKSSIndexSheetTextLayer : CALayer {
    struct CGSize { double width; double height; } _textSize;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) struct CGSize { double width; double height; } textMargins;
@property (readonly) struct CGSize { double x0; double x1; } textSize;
@property BOOL animates;

- (id)actionForKey:(id)a0;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateTextSize;
- (void)_updateLayerSize;

@end
