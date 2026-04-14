@class NSAttributedString;

@interface IKPTCenteredTextLayer : CALayer {
    NSAttributedString *_string;
}

@property (retain, nonatomic) NSAttributedString *string;
@property (nonatomic) struct CGSize { double width; double height; } boxSize;

- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)init;

@end
