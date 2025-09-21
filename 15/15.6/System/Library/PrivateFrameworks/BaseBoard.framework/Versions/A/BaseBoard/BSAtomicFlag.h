@interface BSAtomicFlag : NSObject {
    _Atomic BOOL _flag;
}

- (id)description;
- (id)init;
- (char)getFlag;
- (id)initWithFlag:(char)a0;
- (char)setFlag:(char)a0;

@end
