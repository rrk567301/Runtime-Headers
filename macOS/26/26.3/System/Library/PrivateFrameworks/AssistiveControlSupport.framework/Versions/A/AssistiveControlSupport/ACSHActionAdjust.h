@interface ACSHActionAdjust : ACSHAction

@property (nonatomic) unsigned long long adjustOption;
@property (nonatomic) double adjustValue;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;

@end
