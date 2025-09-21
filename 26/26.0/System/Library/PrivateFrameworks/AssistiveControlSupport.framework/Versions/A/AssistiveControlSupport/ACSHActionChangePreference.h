@interface ACSHActionChangePreference : ACSHAction

@property (nonatomic) unsigned long long preferenceOption;
@property (retain, nonatomic) id preferenceValue;

- (unsigned long long)actionType;
- (id)init;
- (void).cxx_destruct;
- (id)dictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
