@interface ACSHActionToggleMinimized : ACSHAction

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
