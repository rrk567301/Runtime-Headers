@class NSString;

@interface ACSHActionRunShortcut : ACSHAction

@property (copy, nonatomic) NSString *shortcutIdentifier;
@property (copy, nonatomic) NSString *shortcutName;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
