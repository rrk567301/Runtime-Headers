@interface ACSHActionDwell : ACSHAction

@property (nonatomic) long long dwellActionType;
@property (nonatomic) BOOL isSingleAction;

- (unsigned long long)hash;
- (id)init;
- (void)performWithEventSourceData:(id)a0;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (id)paramDescription;

@end
