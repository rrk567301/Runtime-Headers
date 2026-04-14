@interface _NSKeyForwardingSetBinding : NSKeySetBinding {
    BOOL _isStored;
    char _padding[3];
}

- (void)setValue:(id)a0 inObject:(id)a1;
- (id)initWithKey:(id)a0 isStored:(BOOL)a1;

@end
