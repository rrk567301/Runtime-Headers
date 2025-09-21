@class NSString, NSURL, NSArray;

@interface SAGuidanceGuideDomainSnippet : SAUISnippet

@property (copy, nonatomic) NSString *domainAlternateDisplayName;
@property (copy, nonatomic) NSString *domainDisplayName;
@property (copy, nonatomic) NSURL *domainIconURI;
@property (copy, nonatomic) NSString *domainName;
@property (nonatomic) char enabledInOfflineMode;
@property (nonatomic) char enabledInOnlineMode;
@property (copy, nonatomic) NSArray *guideSections;
@property (copy, nonatomic) NSString *iconDisplayIdentifier;
@property (nonatomic) char iconNeedsProcessing;
@property (copy, nonatomic) NSString *iconResourceName;
@property (nonatomic) char isAppIcon;
@property (nonatomic) char performIntentEnabledAppAuthorizationCheck;
@property (copy, nonatomic) NSString *tagPhrase;

+ (id)guideDomainSnippet;
+ (id)guideDomainSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
