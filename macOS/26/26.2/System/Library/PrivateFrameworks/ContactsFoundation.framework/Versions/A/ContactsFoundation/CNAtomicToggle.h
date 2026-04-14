@interface CNAtomicToggle : NSObject {
    _Atomic BOOL _state;
}

- (id)initWithState:(BOOL)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (BOOL)trySetState:(BOOL)a0;

@end
