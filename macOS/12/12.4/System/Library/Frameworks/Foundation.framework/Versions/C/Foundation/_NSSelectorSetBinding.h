@interface _NSSelectorSetBinding : NSKeySetBinding {
    SEL setSel;
    void /* function */ *setMethod;
    void /* function */ *set;
}

- (void)setValue:(id)a0 inObject:(id)a1;
- (BOOL)isScalarProperty;
- (id)initWithSetFunc:(void /* function */ *)a0 forImp:(void /* function */ *)a1 selector:(SEL)a2;

@end
