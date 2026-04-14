@interface ACSHActionToggleMinimized : ACSHAction

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
