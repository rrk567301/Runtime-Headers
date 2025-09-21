@class NSString, MAAutoAssetSetStatus;

@interface MAAutoAssetSetSummary : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *clientDomainName;
@property (retain, nonatomic) NSString *assetSetIdentifier;
@property (nonatomic) long long assetSetRepresentation;
@property (retain, nonatomic) MAAutoAssetSetStatus *setJobStatus;
@property (nonatomic) long long scheduledIntervalSecs;
@property (nonatomic) long long scheduledRemainingSecs;
@property (nonatomic) long long pushDelaySecs;
@property (nonatomic) long long activeClientCount;
@property (nonatomic) long long activeMonitorCount;
@property (nonatomic) long long maximumClientCount;
@property (nonatomic) long long totalClientCount;

+ (id)assetSetRepresentationName:(long long)a0;
+ (id)summaryNewMaxColumnStrings;
+ (id)summaryPaddedBanner:(id)a0;
+ (id)summaryPaddedHeader:(id)a0;
+ (id)summaryPaddedString:(id)a0 paddingToLenghtOfString:(id)a1 paddingWith:(id)a2 paddingBefore:(char)a3;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)assetSetRepresentationName;
- (id)initWithDomainName:(id)a0 forAssetSetIdentifier:(id)a1 withAssetSetRepresentation:(long long)a2 withSetJobStatus:(id)a3 withScheduledIntervalSecs:(long long)a4 withScheduledRemainingSecs:(long long)a5 withPushDelaySecs:(long long)a6 withActiveClientCount:(long long)a7 withActiveMonitorCount:(long long)a8 withMaximumClientCount:(long long)a9 withTotalClientCount:(long long)a10;
- (void)summaryBuildMaxColumnStrings:(id)a0;
- (id)summaryPadded:(id)a0;

@end
