@interface _DKObjectType : NSObject <NSSecureCoding, NSCopying> {
    long long _typeCode;
    Class _objectClass;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long typeCode;
@property (readonly, nonatomic) Class objectClass;

+ (id)objectTypeWithTypeCode:(long long)a0;
+ (Class)associatedObjectClass;
+ (id)objectTypeFromClass:(Class)a0;
+ (id)objectTypeWithName:(id)a0;
+ (long long)typeCodeFromName:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTypeCode:(long long)a0 objectClass:(Class)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
