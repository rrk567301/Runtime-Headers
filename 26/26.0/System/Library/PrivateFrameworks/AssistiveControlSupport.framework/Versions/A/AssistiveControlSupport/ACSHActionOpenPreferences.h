@interface ACSHActionOpenPreferences : ACSHAction

@property (nonatomic) long long assistiveControlType;

- (unsigned long long)actionType;
- (id)init;
- (id)dictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
