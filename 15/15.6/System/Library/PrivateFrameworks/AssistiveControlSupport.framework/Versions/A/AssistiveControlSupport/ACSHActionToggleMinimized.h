@interface ACSHActionToggleMinimized : ACSHAction

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
