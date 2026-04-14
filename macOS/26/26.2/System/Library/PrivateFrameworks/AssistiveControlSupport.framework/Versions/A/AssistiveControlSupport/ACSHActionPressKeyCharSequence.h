@class NSString;

@interface ACSHActionPressKeyCharSequence : ACSHAction

@property (retain, nonatomic) NSString *charString;

+ (id)actionWithString:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
