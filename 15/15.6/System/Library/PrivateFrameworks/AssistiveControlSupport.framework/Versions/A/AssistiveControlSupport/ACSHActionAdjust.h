@interface ACSHActionAdjust : ACSHAction

@property (nonatomic) unsigned long long adjustOption;
@property (nonatomic) double adjustValue;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;

@end
