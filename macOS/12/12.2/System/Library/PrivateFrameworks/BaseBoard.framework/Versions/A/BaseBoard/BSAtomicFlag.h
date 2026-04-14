@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (id)description;
- (id)init;
- (id)initWithFlag:(BOOL)a0;
- (BOOL)getFlag;
- (BOOL)setFlag:(BOOL)a0;

@end
