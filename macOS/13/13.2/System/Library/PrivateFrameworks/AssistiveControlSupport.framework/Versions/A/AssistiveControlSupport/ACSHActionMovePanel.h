@interface ACSHActionMovePanel : ACSHAction

@property (nonatomic) unsigned long long moveToPosition;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (id)paramDescription;

@end
