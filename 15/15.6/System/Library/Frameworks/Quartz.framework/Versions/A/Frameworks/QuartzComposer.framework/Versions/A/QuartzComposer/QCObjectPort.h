@interface QCObjectPort : QCVirtualPort {
    void *_unused4[5];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)description;
- (id)object;
- (char)setObject:(id)a0;
- (char)setValue:(id)a0;
- (Class)objectClass;
- (Class)valueClass;
- (char)acceptValuesOfClass:(Class)a0;
- (char)canConnectToPort:(id)a0;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (char)takeValue:(id)a0 fromPort:(id)a1;

@end
