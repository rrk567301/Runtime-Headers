@class NSString, NSPersonNameComponents, NSArray;

@interface CNNameComponentsStringTokenizer : NSObject

@property (copy) NSString *string;
@property (retain) NSPersonNameComponents *components;
@property (retain) NSArray *tokens;

+ (id)componentsFromString:(id)a0;
+ (id)tokensFromString:(id)a0 nameOrder:(long long *)a1;
+ (id)tokensByAdjustingForNobiliaryParticles:(id)a0;
+ (id)whitespaceTokens:(id)a0;
+ (BOOL)isNamePrefix:(id)a0;
+ (id)namePrefixElements;
+ (BOOL)isNameSuffix:(id)a0;
+ (id)nameSuffixElements;
+ (BOOL)isNobiliaryParticle:(id)a0;
+ (id)nobiliaryParticleElements;
+ (id)nameComponentElements;
+ (id)uncachedNameComponentElements;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)parseComponents;
- (void)removeParentheticalContent;
- (void)extractNicknameFromQuotedContent;
- (void)extractNameSuffixFromEnd;
- (void)extractNamePrefixFromBeginning;
- (void)adjustTokensForNobiliaryParticles;
- (void)extractGivenMiddleFamilyNamesFromWhatsLeftUsingOrder:(long long)a0;

@end
