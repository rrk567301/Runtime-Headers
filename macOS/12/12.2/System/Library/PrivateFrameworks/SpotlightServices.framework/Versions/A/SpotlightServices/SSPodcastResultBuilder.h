@class NSString, NSURL, NSDate;

@interface SSPodcastResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSDate *lastViewedDate;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *podcastDescription;
@property (retain, nonatomic) NSURL *imageURL;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)buildCompactCardSection;
- (id)buildInlineCardSection;
- (id)buildLastViewedString;

@end
