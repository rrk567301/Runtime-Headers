@interface ACSHActionPlaceholder : ACSHAction

@property (nonatomic) unsigned long long placeholderActionType;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
