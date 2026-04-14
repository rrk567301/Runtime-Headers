@class NSArray;

@interface LNAlternativeValueType : LNValueType

@property (readonly, copy, nonatomic) NSArray *memberValueTypes;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMemberValueTypes:(id)a0;
- (BOOL)valueIsKindOfType:(id)a0;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (BOOL)objectIsMemberOfType:(id)a0;

@end
