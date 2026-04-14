@class NSArray, MTLType, NSString;

@interface MTLFunctionReflection : NSObject

@property (readonly) NSArray *arguments;
@property (readonly) unsigned long long primitiveKind;
@property (readonly) NSArray *tags;
@property (readonly) MTLType *returnType;
@property (readonly) NSArray *attributes;
@property (readonly) NSString *userAnnotation;
@property (readonly) NSArray *bindings;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

@end
