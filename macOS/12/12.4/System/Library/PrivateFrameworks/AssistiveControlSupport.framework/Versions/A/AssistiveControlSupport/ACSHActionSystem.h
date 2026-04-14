@interface ACSHActionSystem : ACSHAction

@property (nonatomic) unsigned long long _systemActionType;
@property (nonatomic) unsigned long long systemActionType;

+ (id)actionWithType:(unsigned long long)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)performWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (id)paramDescription;
- (id)_initWithActionType:(unsigned long long)a0;

@end
