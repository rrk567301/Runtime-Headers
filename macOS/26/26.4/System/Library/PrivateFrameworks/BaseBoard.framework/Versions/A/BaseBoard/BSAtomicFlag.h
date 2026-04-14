@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)getFlag;
- (BOOL)setFlag:(BOOL)a0;
- (id)initWithFlag:(BOOL)a0;
- (id)init;
- (id)description;

@end
