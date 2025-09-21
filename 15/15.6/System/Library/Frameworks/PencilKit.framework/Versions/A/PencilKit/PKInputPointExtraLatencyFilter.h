@interface PKInputPointExtraLatencyFilter : PKInputPointBaseFilter {
    struct vector<PKInputPoint, std::allocator<PKInputPoint>> { struct *__begin_; struct *__end_; struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> { struct *__value_; } __end_cap_; } _inputPoints;
}

@property (nonatomic) long long numFramesExtraLatency;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addInputPoint:(struct { union { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; char x8; long long x9; double x10; char x11; double x12; long long x13; long long x14; })a0;

@end
