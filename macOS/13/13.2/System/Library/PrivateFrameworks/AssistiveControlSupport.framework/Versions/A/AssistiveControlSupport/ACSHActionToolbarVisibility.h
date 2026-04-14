@class NSString;

@interface ACSHActionToolbarVisibility : ACSHAction

@property (copy, nonatomic) NSString *toolbarIdentifier;
@property (nonatomic) unsigned long long changeMode;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (id)initWithToolbarIdentifier:(id)a0 changeMode:(unsigned long long)a1;

@end
