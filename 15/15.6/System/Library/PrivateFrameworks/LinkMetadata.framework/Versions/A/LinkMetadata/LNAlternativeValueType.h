@class NSArray;

@interface LNAlternativeValueType : LNValueType

@property (readonly, copy, nonatomic) NSArray *memberValueTypes;

+ (char)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)objectClass;
- (id)initWithMemberValueTypes:(id)a0;
- (char)valueIsKindOfType:(id)a0;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (char)objectIsMemberOfType:(id)a0;

@end
