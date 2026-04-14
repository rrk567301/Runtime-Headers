@class NSString, NSURL;

@interface FCPostPurchaseOnboardingConfiguration : NSObject

@property (nonatomic) unsigned long long postPurchaseOnboardingStep;
@property (copy, nonatomic) NSString *landingPageArticleID;
@property (copy, nonatomic) NSString *callToActionText;
@property (copy, nonatomic) NSURL *deepLinkURL;

- (id)initWithConfigDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPostPurchaseOnboardingStep:(unsigned long long)a0 landingPageArticleID:(id)a1 callToActionText:(id)a2 deepLinkURL:(id)a3;

@end
