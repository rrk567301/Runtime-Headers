@interface ML3SetValuesForPropertiesOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (char)_execute:(id *)a0;
- (char)_setValues:(id)a0 forProperties:(id)a1 withEntityClass:(Class)a2 usingPersistentID:(long long)a3 connection:(id)a4 error:(id *)a5;

@end
