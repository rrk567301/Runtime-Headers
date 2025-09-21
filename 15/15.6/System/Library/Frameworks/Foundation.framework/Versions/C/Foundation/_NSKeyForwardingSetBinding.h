@interface _NSKeyForwardingSetBinding : NSKeySetBinding {
    char _isStored;
    char _padding[3];
}

- (id)initWithKey:(id)a0 isStored:(char)a1;
- (void)setValue:(id)a0 inObject:(id)a1;

@end
