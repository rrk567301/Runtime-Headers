@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {
    struct vector<std::vector<TIHandwritingPoint>, std::allocator<std::vector<TIHandwritingPoint>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<TIHandwritingPoint> *, std::allocator<std::vector<TIHandwritingPoint>>> { void *__value_; } __end_cap_; } _strokes;
    BOOL _continuePreviousStroke;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)endStroke;
- (void)removeStrokeAtIndex:(unsigned long long)a0;
- (void)removeAllStrokes;
- (unsigned long long)numberOfStrokes;
- (unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })pointAtIndex:(unsigned long long)a0 inStrokeAtIndex:(unsigned long long)a1;
- (unsigned long long)totalNumberOfPoints;

@end
