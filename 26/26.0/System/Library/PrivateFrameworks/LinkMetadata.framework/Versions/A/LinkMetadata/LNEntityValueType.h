@class NSString;

@interface LNEntityValueType : LNValueType

@property (readonly, copy, nonatomic) NSString *typeName;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 contentType:(id)a1;
- (id)initWithTypeName:(id)a0;

@end
