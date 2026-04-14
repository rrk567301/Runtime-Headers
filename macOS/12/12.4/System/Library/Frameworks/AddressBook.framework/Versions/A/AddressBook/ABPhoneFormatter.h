@class CNCache;

@interface ABPhoneFormatter : NSFormatter

@property (readonly, nonatomic) CNCache *formattedPhoneNumbersCache;

+ (id)sharedPhoneFormatter;
+ (id)phoneNumberDetector;
+ (id)formatRawPhoneNumber:(id)a0;
+ (BOOL)stringContainsOnlyPhoneCharacters:(id)a0;
+ (id)localizedStringByStandardizingPhoneNumber:(id)a0;
+ (id)onlyPhoneCharactersSet;
+ (id)generateOnlyPhoneCharactersSet;
+ (id)stringForPhoneNumber:(id)a0 options:(unsigned long long)a1;
+ (id)formatPhoneNumber:(id)a0 options:(unsigned long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (void)setFormatAutosaveName:(id)a0;

@end
