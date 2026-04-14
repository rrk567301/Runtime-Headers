@interface _MTLIndirectScissorRects : NSObject {
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *scissorRects;
    unsigned long long count;
}

@property (nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *scissorRects;
@property (nonatomic) unsigned long long count;

- (void)dealloc;
- (id)initWithCount:(unsigned long long)a0;

@end
