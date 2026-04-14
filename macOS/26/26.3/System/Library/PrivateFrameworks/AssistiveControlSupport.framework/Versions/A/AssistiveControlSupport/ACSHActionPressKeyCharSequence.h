@class NSString;

@interface ACSHActionPressKeyCharSequence : ACSHAction

@property (retain, nonatomic) NSString *charString;

+ (id)actionWithString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_configureWithPlistDictionary:(id)a0;
- (id)paramDictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end
