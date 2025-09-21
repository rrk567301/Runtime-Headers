@interface KHDBBoolRidIndex : KHDBRidIndex

- (unsigned long long)count;
- (id)convertBoolValueToIndexKey:(char)a0;
- (id)indexForBoolValue:(char)a0;
- (id)indexForBoolValue:(char)a0 createIfMissing:(char)a1;
- (void)setIndex:(id)a0 forBoolValue:(char)a1;
- (void)setReturnId:(unsigned long long)a0 forValue:(char)a1;

@end
