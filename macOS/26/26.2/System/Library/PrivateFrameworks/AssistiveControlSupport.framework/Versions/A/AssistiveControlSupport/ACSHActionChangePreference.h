@interface ACSHActionChangePreference : ACSHAction

@property (nonatomic) unsigned long long preferenceOption;
@property (retain, nonatomic) id preferenceValue;

- (void).cxx_destruct;
- (unsigned long long)actionType;
- (id)init;
- (id)dictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
