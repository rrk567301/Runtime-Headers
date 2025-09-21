@class WKWebExtensionMatchPattern, NSString, NSArray;

@interface WBSWebExtensionMatchPattern : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) WKWebExtensionMatchPattern *webKitMatchPattern;
@property (readonly, nonatomic) NSString *scheme;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSArray *expandedMatchPatternStrings;
@property (readonly, nonatomic) char matchesAllURLs;
@property (readonly, nonatomic) char matchesAllHosts;

+ (id)allHostsAndSchemesMatchPattern;
+ (id)matchPatternWithString:(id)a0;
+ (id)allHostsAndSchemesMatchPatternSet;
+ (id)matchPatternForDomain:(id)a0;
+ (char)hasPatternMatchingIndividualHost:(id)a0;
+ (id)matchPatternForDomainWithoutSubdomains:(id)a0;
+ (id)matchPatternWtihWebKitPattern:(id)a0;
+ (id)matchPatternsWithWebKitPatterns:(id)a0;
+ (char)patternSetContainsAllHostsPattern:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)matchesPattern:(id)a0;
- (id)initWithScheme:(id)a0 host:(id)a1 path:(id)a2;
- (char)matchesURL:(id)a0;
- (char)matchesPattern:(id)a0 options:(unsigned long long)a1;
- (char)matchesURL:(id)a0 options:(unsigned long long)a1;
- (id)_descriptionWithScheme:(id)a0;
- (id)_webKitMatchPattern;
- (id)initWithString:(id)a0 exception:(id *)a1;
- (id)initWithWebKitMatchPattern:(id)a0;

@end
