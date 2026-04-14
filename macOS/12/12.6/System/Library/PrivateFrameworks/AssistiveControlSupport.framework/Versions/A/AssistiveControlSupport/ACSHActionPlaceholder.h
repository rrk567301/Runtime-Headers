@interface ACSHActionPlaceholder : ACSHAction

@property (nonatomic) unsigned long long placeholderActionType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)performWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;

@end
