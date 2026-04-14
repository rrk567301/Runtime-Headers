@class NSString;

@interface ACSHActionRunShortcut : ACSHAction

@property (copy, nonatomic) NSString *shortcutIdentifier;
@property (copy, nonatomic) NSString *shortcutName;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
