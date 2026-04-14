@interface ACSHActionToggleMinimized : ACSHAction

- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
