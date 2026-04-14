@class NSString, NSArray, NSURL;

@interface SPUISLinkResultBuilder : SPUISResultBuilder

@property (retain, nonatomic) NSString *websiteTitle;
@property (retain, nonatomic) NSArray *senders;
@property (retain, nonatomic) NSArray *senderContactIdentifiers;
@property (nonatomic) unsigned long long syndicationStatus;
@property (retain, nonatomic) NSURL *url;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildBadgingImageWithThumbnail:(id)a0;
- (id)buildDescriptions;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
