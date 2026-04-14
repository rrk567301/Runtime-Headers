@class SAExclave;

@interface SAExclaveFrame : SAFrame {
    SAExclave *_exclave;
}

- (void)reset;
- (void).cxx_destruct;
- (id)exclave;
- (id)initCopyingFrame:(id)a0 withParent:(id)a1;
- (BOOL)isExclave;

@end
