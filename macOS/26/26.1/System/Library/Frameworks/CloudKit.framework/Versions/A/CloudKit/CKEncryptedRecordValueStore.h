@interface CKEncryptedRecordValueStore : CKRecordValueStore

- (void)setCompatibilityModeObjectNoValidate:(id)a0 forKey:(id)a1;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)isEncrypted;
- (id)objectForKeyedSubscript:(id)a0;

@end
