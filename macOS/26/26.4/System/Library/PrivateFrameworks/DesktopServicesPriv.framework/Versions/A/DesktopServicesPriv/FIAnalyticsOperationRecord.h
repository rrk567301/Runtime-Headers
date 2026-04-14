@interface FIAnalyticsOperationRecord : FIAnalyticsRecord

- (id)initWithEventName:(id)a0;
- (BOOL)validate;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setItemType:(unsigned long long)a0;
- (void)setFileSystem:(unsigned long long)a0 forKey:(id)a1;

@end
