@class NSNumber;

@interface APSponsorshipPlacementConfig : APConfiguration

@property (readonly, nonatomic) NSNumber *isUniversalLinkInNewsSupported;
@property (readonly, nonatomic) NSNumber *isPeriodicFetchFromDaemonEnabled;
@property (readonly, nonatomic) NSNumber *throttlePercentage;

+ (id)path;

@end
