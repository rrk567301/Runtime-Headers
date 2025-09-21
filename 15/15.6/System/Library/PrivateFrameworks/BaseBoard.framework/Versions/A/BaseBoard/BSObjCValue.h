@class NSString, NSArray;

@interface BSObjCValue : NSObject <NSCopying> {
    NSString *_unqualifiedEncoding;
    Class _objectClass;
    NSArray *_objectProtocols;
    NSArray *_objectContainedClasses;
    int _nullability;
    long long _argumentIndex;
    NSString *_argumentName;
    char _block;
    BSObjCValue *_blockReturnValue;
    NSArray *_blockArguments;
}

@property (readonly, nonatomic) char type;
@property (readonly, nonatomic) unsigned char typeQualifiers;
@property (readonly, copy, nonatomic) NSString *encoding;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) char typeQualifier;

+ (id)doubleValue;
+ (id)boolValue;
+ (id)integerValue;
+ (id)unsignedIntegerValue;
+ (id)valueWithBuilder:(id /* block */)a0;
+ (id)valueWithBuilder:(id /* block */)a0 error:(out id *)a1;
+ (id)valueWithEncoding:(id)a0;
+ (id)valueWithEncoding:(id)a0 error:(out id *)a1;
+ (id)voidValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)argumentIndex;
- (id)pointerValue;
- (char)isObject;
- (Class)objectClass;
- (char)isFloatingPoint;
- (char)isObjectNonnull;
- (char)isBlock;
- (id)objectProtocols;
- (id)argumentName;
- (id)blockArguments;
- (id)blockReturnValue;
- (char)hasQualifier:(char)a0;
- (char)isBoolean;
- (char)isObjectNullabilitySpecified;
- (char)isObjectNullable;
- (char)isOneWay;
- (char)isPointer;
- (char)isStruct;
- (char)isVoid;
- (char)isVoidPointer;
- (char)isXPCObject;
- (id)objectContainedClasses;
- (id)structFlattenedMembers;
- (id)structMembers;
- (id)structName;

@end
