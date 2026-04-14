@class LNValueType;

@interface LNArrayValueType : LNValueType

@property (readonly, copy, nonatomic) LNValueType *memberValueType;
@property (readonly, nonatomic) long long capabilities;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMemberValueType:(id)a0 capabilities:(long long)a1;
- (id)initWithMemberValueType:(id)a0;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (BOOL)objectIsMemberOfType:(id)a0;

@end
