@interface CNAtomicToggle : NSObject {
    _Atomic BOOL _state;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithState:(BOOL)a0;
- (BOOL)trySetState:(BOOL)a0;

@end
