@interface ACSHActionAdjust : ACSHAction

@property (nonatomic) unsigned long long adjustOption;
@property (nonatomic) double adjustValue;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;

@end
