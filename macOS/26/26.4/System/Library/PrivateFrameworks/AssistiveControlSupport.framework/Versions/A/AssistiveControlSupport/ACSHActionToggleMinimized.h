@interface ACSHActionToggleMinimized : ACSHAction

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
