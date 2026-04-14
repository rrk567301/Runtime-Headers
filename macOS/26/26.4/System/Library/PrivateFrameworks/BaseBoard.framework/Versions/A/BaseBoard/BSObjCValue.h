@class NSString, NSArray;

@interface BSObjCValue : NSObject <NSCopying> {
    NSString *_unqualifiedEncoding;
    Class _objectClass;
    NSArray *_objectProtocols;
    NSArray *_objectContainedClasses;
    int _nullability;
    long long _argumentIndex;
    NSString *_argumentName;
    BOOL _block;
    BSObjCValue *_blockReturnValue;
    NSArray *_blockArguments;
}

@property (readonly, nonatomic) char type;
@property (readonly, nonatomic) unsigned char typeQualifiers;
@property (readonly, copy, nonatomic) NSString *encoding;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) char typeQualifier;

+ (id)unsignedIntegerValue;
+ (id)doubleValue;
+ (id)integerValue;
+ (id)boolValue;
+ (id)valueWithBuilder:(id /* block */)a0;
+ (id)valueWithBuilder:(id /* block */)a0 error:(out id *)a1;
+ (id)valueWithEncoding:(id)a0;
+ (id)valueWithEncoding:(id)a0 error:(out id *)a1;
+ (id)voidValue;

- (Class)objectClass;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)structName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isObject;
- (long long)argumentIndex;
- (id)pointerValue;
- (BOOL)isFloatingPoint;
- (BOOL)isObjectNonnull;
- (id)objectProtocols;
- (BOOL)isBlock;
- (id)argumentName;
- (id)blockArguments;
- (id)blockReturnValue;
- (BOOL)hasQualifier:(char)a0;
- (BOOL)isBoolean;
- (BOOL)isObjectNullabilitySpecified;
- (BOOL)isObjectNullable;
- (BOOL)isOneWay;
- (BOOL)isPointer;
- (BOOL)isStruct;
- (BOOL)isVoid;
- (BOOL)isVoidPointer;
- (BOOL)isXPCObject;
- (id)objectContainedClasses;
- (id)structFlattenedMembers;
- (id)structMembers;

@end
