@interface MTLArrayType : MTLType

@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long stride;
@property (readonly) unsigned long long argumentIndexStride;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)elementStructType;
- (id)elementArrayType;
- (id)elementIndirectArgumentType;
- (id)elementTextureReferenceType;
- (id)elementPointerType;

@end
