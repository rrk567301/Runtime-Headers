@class NSString;

@interface ACSHActionRunShortcut : ACSHAction

@property (copy, nonatomic) NSString *shortcutIdentifier;
@property (copy, nonatomic) NSString *shortcutName;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
