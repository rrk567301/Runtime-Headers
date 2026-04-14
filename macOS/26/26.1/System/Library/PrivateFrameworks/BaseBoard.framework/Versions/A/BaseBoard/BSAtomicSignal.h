@interface BSAtomicSignal : NSObject {
    _Atomic BOOL _flag;
}

- (BOOL)signal;
- (id)description;
- (BOOL)hasBeenSignalled;
- (id)init;

@end
