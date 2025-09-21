@class NSArray, PXCTFramesetter;

@interface PXCTFrame : NSObject {
    char _prepared;
}

@property (readonly, nonatomic) struct __CTFrame { } *frame;
@property (readonly, nonatomic) unsigned long long maximumLineCount;
@property (readonly, nonatomic) char allowTruncation;
@property (readonly, weak, nonatomic) PXCTFramesetter *framesetter;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } origin;
@property (readonly, nonatomic) NSArray *lines;
@property (readonly, nonatomic, getter=isTruncated) char truncated;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)prepare;
- (char)_truncateLine:(inout const struct __CTLine **)a0 withOrigin:(inout struct CGPoint { double x0; double x1; } *)a1 referenceAttributedString:(inout id *)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)initWithFrame:(struct __CTFrame { } *)a0 maximumLineCount:(unsigned long long)a1 allowTruncation:(char)a2 framesetter:(id)a3;

@end
