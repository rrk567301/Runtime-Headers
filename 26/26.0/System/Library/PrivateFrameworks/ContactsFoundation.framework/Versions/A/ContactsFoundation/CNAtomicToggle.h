@interface CNAtomicToggle : NSObject {
    _Atomic BOOL _state;
}

- (id)initWithState:(BOOL)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)trySetState:(BOOL)a0;

@end
