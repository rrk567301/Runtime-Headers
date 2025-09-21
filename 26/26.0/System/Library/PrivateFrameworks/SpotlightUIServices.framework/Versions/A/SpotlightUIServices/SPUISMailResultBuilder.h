@class NSString, NSArray, NSDate;

@interface SPUISMailResultBuilder : SPUISResultBuilder

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *authorEmail;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSArray *recipientEmails;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildRecipientsString;
- (id)buildThumbnail;
- (id)fallbackTitleString;
- (unsigned long long)numberOfLinesForDescriptions;

@end
