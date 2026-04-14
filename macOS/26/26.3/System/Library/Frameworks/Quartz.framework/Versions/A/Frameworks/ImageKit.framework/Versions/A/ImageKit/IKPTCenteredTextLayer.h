@class NSAttributedString;

@interface IKPTCenteredTextLayer : CALayer {
    NSAttributedString *_string;
}

@property (retain, nonatomic) NSAttributedString *string;
@property (nonatomic) struct CGSize { double width; double height; } boxSize;

- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)dealloc;

@end
