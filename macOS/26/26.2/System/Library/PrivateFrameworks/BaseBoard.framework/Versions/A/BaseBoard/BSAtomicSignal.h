@interface BSAtomicSignal : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)signal;
- (id)description;
- (id)init;
- (BOOL)hasBeenSignalled;

@end
