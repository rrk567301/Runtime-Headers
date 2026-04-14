@interface LNAnyAppValueType : LNValueType

+ (id)objectClassesForCoding;

- (Class)objectClass;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
