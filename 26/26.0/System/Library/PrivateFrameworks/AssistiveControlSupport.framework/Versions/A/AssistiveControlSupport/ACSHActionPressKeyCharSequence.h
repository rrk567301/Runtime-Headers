@class NSString;

@interface ACSHActionPressKeyCharSequence : ACSHAction

@property (retain, nonatomic) NSString *charString;

+ (id)actionWithString:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
