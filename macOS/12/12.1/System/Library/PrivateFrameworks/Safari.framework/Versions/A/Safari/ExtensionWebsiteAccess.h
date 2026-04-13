@class NSArray, NSDictionary;

@interface ExtensionWebsiteAccess : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int accessLevel;
@property (readonly, nonatomic) NSArray *allowedDomains;
@property (readonly, nonatomic) struct Vector<Safari::ExtensionDomainPattern, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; } allowedDomainPatterns;
@property (readonly, nonatomic) NSArray *allowedDomainsForHeaderInjection;
@property (readonly, nonatomic) struct Vector<Safari::ExtensionDomainPattern, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; } allowedDomainPatternsForHeaderInjection;
@property (readonly, nonatomic) BOOL hasInjectedContent;
@property (readonly, nonatomic) BOOL specifiedPresenceOfInjectedContent;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)canAccessURL:(id)a0;
- (BOOL)requiresAccessToAdditionalWebsitesThan:(id)a0;

@end
