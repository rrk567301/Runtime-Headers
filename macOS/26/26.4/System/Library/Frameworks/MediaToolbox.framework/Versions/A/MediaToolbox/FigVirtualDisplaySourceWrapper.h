@interface FigVirtualDisplaySourceWrapper : NSObject {
    struct OpaqueFigVirtualDisplaySource { } *_source;
}

- (struct OpaqueFigVirtualDisplaySource { } *)source;
- (void)dealloc;
- (id)initWithSourceObject:(struct OpaqueFigVirtualDisplaySource { } *)a0;

@end
