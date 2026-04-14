@interface CKEncryptedRecordValueStore : CKRecordValueStore

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (BOOL)isEncrypted;
- (void)setCompatibilityModeObjectNoValidate:(id)a0 forKey:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1;

@end
