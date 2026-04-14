@class NSString, CNContact, NSArray, NSDate;

@interface SPUISMailResultBuilder : SPUISResultBuilder

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *authorEmail;
@property (retain, nonatomic) CNContact *authorContact;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *recipientEmails;

+ (id)bundleId;
+ (id)contactKeysToFetch;
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
- (id)bundleIdentifierForAppIconBadgeImage;
- (id)fallbackTitleString;
- (unsigned long long)numberOfLinesForDescriptions;
- (id)resultAppBundleId;

@end
