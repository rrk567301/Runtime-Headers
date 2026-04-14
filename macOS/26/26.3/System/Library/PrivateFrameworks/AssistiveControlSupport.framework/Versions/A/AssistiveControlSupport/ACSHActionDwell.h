@interface ACSHActionDwell : ACSHAction

@property (nonatomic) long long dwellActionType;
@property (nonatomic) BOOL isSingleAction;

- (id)init;
- (unsigned long long)hash;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDescription;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
