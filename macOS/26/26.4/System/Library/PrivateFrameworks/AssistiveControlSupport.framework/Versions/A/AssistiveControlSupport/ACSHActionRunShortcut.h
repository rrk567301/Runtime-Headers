@class NSString;

@interface ACSHActionRunShortcut : ACSHAction

@property (copy, nonatomic) NSString *shortcutIdentifier;
@property (copy, nonatomic) NSString *shortcutName;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
