@interface ACSHActionToggleMinimized : ACSHAction

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)performWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;

@end
