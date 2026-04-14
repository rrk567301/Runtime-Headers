@interface LNAnyAppValueType : LNValueType

+ (id)objectClassesForCoding;

- (Class)objectClass;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
