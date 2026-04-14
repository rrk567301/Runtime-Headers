@class NSString;

@interface ACSHActionToolbarVisibility : ACSHAction

@property (copy, nonatomic) NSString *toolbarIdentifier;
@property (nonatomic) unsigned long long changeMode;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)initWithToolbarIdentifier:(id)a0 changeMode:(unsigned long long)a1;
- (id)paramDictionaryForSaving;

@end
