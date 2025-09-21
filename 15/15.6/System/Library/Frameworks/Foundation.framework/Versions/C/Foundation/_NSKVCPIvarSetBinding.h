@interface _NSKVCPIvarSetBinding : NSKeySetBinding {
    long long offset;
    void /* function */ *set;
}

- (id)initWithSetFunc:(void /* function */ *)a0 ivarOffset:(long long)a1;
- (char)isScalarProperty;
- (void)setValue:(id)a0 inObject:(id)a1;

@end
