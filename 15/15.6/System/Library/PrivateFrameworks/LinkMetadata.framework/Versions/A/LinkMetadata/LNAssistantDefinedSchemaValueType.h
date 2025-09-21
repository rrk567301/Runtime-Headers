@class NSString;

@interface LNAssistantDefinedSchemaValueType : LNValueType

@property (readonly, copy, nonatomic) NSString *identifier;

+ (char)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (Class)objectClass;

@end
