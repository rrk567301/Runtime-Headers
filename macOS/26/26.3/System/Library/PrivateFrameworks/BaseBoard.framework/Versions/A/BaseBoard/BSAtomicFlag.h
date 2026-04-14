@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (id)description;
- (id)initWithFlag:(BOOL)a0;
- (BOOL)getFlag;
- (id)init;
- (BOOL)setFlag:(BOOL)a0;

@end
