@interface QCObjectPort : QCVirtualPort {
    void *_unused4[5];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)description;
- (BOOL)setObject:(id)a0;
- (id)object;
- (BOOL)setValue:(id)a0;
- (Class)objectClass;
- (Class)valueClass;
- (id)initWithNode:(id)a0 arguments:(id)a1;
- (BOOL)canConnectToPort:(id)a0;
- (BOOL)takeValue:(id)a0 fromPort:(id)a1;
- (BOOL)acceptValuesOfClass:(Class)a0;

@end
