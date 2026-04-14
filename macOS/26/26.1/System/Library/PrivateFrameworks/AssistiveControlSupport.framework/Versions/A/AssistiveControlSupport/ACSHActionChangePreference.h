@interface ACSHActionChangePreference : ACSHAction

@property (nonatomic) unsigned long long preferenceOption;
@property (retain, nonatomic) id preferenceValue;

- (unsigned long long)actionType;
- (void).cxx_destruct;
- (id)init;
- (id)dictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
