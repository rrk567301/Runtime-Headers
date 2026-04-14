@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)getFlag;
- (BOOL)setFlag:(BOOL)a0;
- (id)description;
- (id)initWithFlag:(BOOL)a0;
- (id)init;

@end
