@interface _MTLIndirectViewports : NSObject {
    struct { double x0; double x1; double x2; double x3; double x4; double x5; } *viewports;
    unsigned long long count;
}

@property (nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; } *viewports;
@property (nonatomic) unsigned long long count;

- (void)dealloc;
- (id)initWithCount:(unsigned long long)a0;

@end
