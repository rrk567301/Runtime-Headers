@class NSShadow, NSAttributedString;

@interface PXCTFramesetter : NSObject {
    char _prepared;
}

@property (readonly, nonatomic) struct __CTFramesetter { } *framesetter;
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) struct CGContext { } *context;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)prepare;
- (id)frameWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 maximumLineCount:(unsigned long long)a1 allowTruncation:(char)a2;
- (id)initWithAttributedString:(id)a0 context:(struct CGContext { } *)a1;

@end
