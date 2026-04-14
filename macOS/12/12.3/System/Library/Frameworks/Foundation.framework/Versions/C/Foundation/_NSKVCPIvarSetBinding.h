@interface _NSKVCPIvarSetBinding : NSKeySetBinding {
    long long offset;
    void /* function */ *set;
}

- (void)setValue:(id)a0 inObject:(id)a1;
- (BOOL)isScalarProperty;
- (id)initWithSetFunc:(void /* function */ *)a0 ivarOffset:(long long)a1;

@end
