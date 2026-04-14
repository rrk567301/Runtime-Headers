@class NSString, NSArray;

@interface LNAlternativeValueType : LNValueType

@property (readonly, copy, nonatomic) NSString *appEnumIdentifier;
@property (readonly, copy, nonatomic) NSArray *memberValueTypes;

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithAppEnumIdentifier:(id)a0 memberValueTypes:(id)a1;
- (BOOL)valueIsKindOfType:(id)a0;
- (id)initWithMemberValueTypes:(id)a0;
- (void)enumerateValuesOfValueType:(id)a0 value:(id)a1 block:(id /* block */)a2;
- (BOOL)objectIsMemberOfType:(id)a0;

@end
