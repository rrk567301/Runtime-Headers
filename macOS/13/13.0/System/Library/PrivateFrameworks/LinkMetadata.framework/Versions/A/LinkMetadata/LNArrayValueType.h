@class LNValueType;

@interface LNArrayValueType : LNValueType

@property (readonly, copy, nonatomic) LNValueType *memberValueType;
@property (readonly, nonatomic) long long capabilities;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)objectClass;
- (id)initWithMemberValueType:(id)a0 capabilities:(long long)a1;
- (id)metadataClassesForCoding;
- (id)initWithMemberValueType:(id)a0;
- (BOOL)objectIsMemberOfType:(id)a0;
- (id)objectClassesForCoding;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;

@end
