@interface ACSHActionAdjust : ACSHAction

@property (nonatomic) unsigned long long adjustOption;
@property (nonatomic) double adjustValue;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;

@end
