@interface LNAnyAppValueType : LNValueType

+ (id)objectClassesForCoding;

- (Class)objectClass;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
