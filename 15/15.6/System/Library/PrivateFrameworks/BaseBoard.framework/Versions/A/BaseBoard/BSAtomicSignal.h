@interface BSAtomicSignal : NSObject {
    _Atomic BOOL _flag;
}

- (id)description;
- (id)init;
- (char)signal;
- (char)hasBeenSignalled;

@end
