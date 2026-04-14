@class NSString;

@interface MTLStructMember : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long argumentIndex;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)pointerType;
- (id)indirectArgumentType;
- (unsigned long long)renderTargetIndex;
- (id)structType;
- (id)arrayType;
- (id)textureReferenceType;

@end
