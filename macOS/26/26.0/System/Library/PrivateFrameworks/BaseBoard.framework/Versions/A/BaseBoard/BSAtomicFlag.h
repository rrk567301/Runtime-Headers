@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (id)initWithFlag:(BOOL)a0;
- (BOOL)setFlag:(BOOL)a0;
- (id)init;
- (BOOL)getFlag;
- (id)description;

@end
