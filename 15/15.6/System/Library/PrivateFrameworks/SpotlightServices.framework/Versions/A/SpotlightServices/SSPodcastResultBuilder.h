@class NSString, NSArray, NSURL, NSDate;

@interface SSPodcastResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *lastViewedDate;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *podcastDescription;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSArray *authors;

+ (id)bundleId;
+ (char)isCoreSpotlightResult;
+ (char)supportsResult:(id)a0;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCompactCardSection;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)buildLastViewedString;

@end
