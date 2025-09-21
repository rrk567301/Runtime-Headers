@interface _NSKeyForwardingGetBinding : NSKeyGetBinding {
    char _isStored;
    char _padding[3];
}

- (id)getValueFromObject:(id)a0;
- (id)initWithKey:(id)a0 isStored:(char)a1;

@end
