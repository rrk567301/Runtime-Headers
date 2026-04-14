@class NSPointerArray;

@interface _GCDevicePhysicalInputMutableStateTable : NSObject <NSCopying> {
    NSPointerArray *_primitiveState;
    NSPointerArray *_objectPolicyState;
    NSPointerArray *_objectState;
}

@property (readonly) unsigned short magic;
@property (readonly) unsigned int primitiveSlotCount;
@property (readonly) unsigned int objectSlotCount;

- (void)dealloc;
- (id)copy;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)primitiveValueAtIndex:(unsigned int)a0;
- (void)setPrimitiveValue:(unsigned long long)a0 atIndex:(unsigned int)a1;
- (id)objectValueAtIndex:(unsigned int)a0;
- (void)setObjectValue:(id)a0 atIndex:(unsigned int)a1 policy:(unsigned long long)a2;

@end
