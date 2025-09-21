@class NSString, CNContact, NSArray, NSDate;

@interface SSMailResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *authorEmail;
@property (retain, nonatomic) CNContact *authorContact;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *recipientEmails;

+ (id)contactKeysToFetch;
+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;
+ (long long)contactFormatterStyle;
+ (id)_authorEmailFromResult:(id)a0;
+ (id)authorEmailsFromResults:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildRecipientsString;
- (id)buildThumbnail;
- (id)fallbackTitleString;
- (unsigned long long)numberOfLinesForDescriptions;
- (id)resultAppBundleId;

@end
