@interface FIAnalyticsOperationRecord : FIAnalyticsRecord

- (BOOL)validate;
- (void)setItemType:(unsigned long long)a0;
- (id)initWithEventName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setFileSystem:(unsigned long long)a0 forKey:(id)a1;

@end
