@class NSString;

@interface LNAssistantDefinedSchemaValueType : LNValueType

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

@end
