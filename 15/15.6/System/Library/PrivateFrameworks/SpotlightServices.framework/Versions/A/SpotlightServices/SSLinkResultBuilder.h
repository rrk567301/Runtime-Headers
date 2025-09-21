@class NSString, NSArray, NSURL;

@interface SSLinkResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *websiteTitle;
@property (retain, nonatomic) NSArray *senders;
@property (retain, nonatomic) NSArray *senderContactIdentifiers;
@property (nonatomic) unsigned long long syndicationStatus;
@property (retain, nonatomic) NSURL *url;

+ (id)bundleId;
+ (char)isCoreSpotlightResult;
+ (char)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
