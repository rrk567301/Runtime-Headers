@class NSString;

@interface ACSHActionPressKeyCharSequence : ACSHAction

@property (retain, nonatomic) NSString *charString;

+ (id)actionWithString:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
