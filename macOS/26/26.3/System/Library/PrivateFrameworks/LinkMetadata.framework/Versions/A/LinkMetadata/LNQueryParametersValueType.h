@interface LNQueryParametersValueType : LNValueType

+ (BOOL)supportsSecureCoding;
+ (id)objectClassesForCoding;

- (Class)objectClass;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
