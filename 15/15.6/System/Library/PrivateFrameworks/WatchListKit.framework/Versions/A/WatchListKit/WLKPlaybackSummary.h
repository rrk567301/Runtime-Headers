@class NSString, NSNumber, NSDate;

@interface WLKPlaybackSummary : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isAlwaysLive;
@property (nonatomic) char isTimerDerived;
@property (nonatomic, getter=isFromActivePlayerPath) char fromActivePlayerPath;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSDate *currentPlaybackDate;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *elapsedTime;
@property (readonly, nonatomic) NSNumber *featureDuration;
@property (readonly, nonatomic) NSNumber *featureElapsedTime;
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSNumber *accountIDAsNumber;
@property (readonly, nonatomic) NSString *externalProfileID;
@property (readonly, nonatomic) NSString *contentID;
@property (readonly, nonatomic) NSString *serviceID;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) NSNumber *playbackRate;
@property (readonly, nonatomic) long long completionState;
@property (readonly, nonatomic) long long playbackType;

+ (double)playedThresholdTimeForDuration:(double)a0;
+ (id)EBSSummaryWithBundleID:(id)a0 channelID:(id)a1 externalId:(id)a2 accountID:(id)a3 externalProfileID:(id)a4 timestamp:(id)a5 playbackState:(long long)a6 playbackRate:(id)a7 currentPlaybackDate:(id)a8;
+ (id)VODSummaryWithBundleID:(id)a0 channelID:(id)a1 contentID:(id)a2 accountID:(id)a3 externalProfileID:(id)a4 timestamp:(id)a5 duration:(id)a6 elapsedTime:(id)a7 featureDuration:(id)a8 featureElapsedTime:(id)a9 playbackState:(long long)a10 playbackRate:(id)a11 completionState:(long long)a12;
+ (long long)completionStateForDuration:(double)a0 elapsedTime:(double)a1;
+ (id)liveSummaryWithBundleID:(id)a0 channelID:(id)a1 serviceID:(id)a2 accountID:(id)a3 externalProfileID:(id)a4 timestamp:(id)a5 playbackState:(long long)a6 playbackRate:(id)a7 currentPlaybackDate:(id)a8;
+ (id)VODSummaryWithBundleID:(id)a0 channelID:(id)a1 contentID:(id)a2 accountID:(id)a3 externalProfileID:(id)a4 timestamp:(id)a5 duration:(id)a6 elapsedTime:(id)a7 playbackState:(long long)a8 playbackRate:(id)a9 completionState:(long long)a10;
+ (id)_debugStringForPlaybackType:(long long)a0;
+ (id)debugStringForCompletionState:(long long)a0;
+ (id)debugStringForPlaybackState:(long long)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)shortDescription;
- (char)_isValid;
- (id)sanitizedCopy;
- (id)JSONRepresentation;
- (char)_compareOptional:(id)a0 with:(id)a1;
- (char)_compareOptionalTemporalValue:(id)a0 with:(id)a1 fuzzy:(char)a2;
- (char)_validate:(id)a0 identifier:(id)a1 expectedClass:(Class)a2;
- (id)elapsedTimeSummaryWithPlaybackState:(long long)a0 timerDerived:(char)a1;
- (id)initWithBundleID:(id)a0 timestamp:(id)a1 duration:(id)a2 elapsedTime:(id)a3 featureDuration:(id)a4 featureElapsedTime:(id)a5 externalProfileID:(id)a6 contentID:(id)a7 accountID:(id)a8 playbackState:(long long)a9 playbackRate:(id)a10 completionState:(long long)a11 isAlwaysLive:(char)a12 serviceID:(id)a13 currentPlaybackDate:(id)a14 playbackType:(long long)a15 isTimerDerived:(char)a16 isFromActivePlayerPath:(char)a17 channelID:(id)a18;
- (id)initWithMediaRemoteDictionary:(id)a0 bundleID:(id)a1 accountID:(id)a2 isFromActivePlayerPath:(char)a3;
- (char)isEqualToSummary:(id)a0;
- (char)isEquivalentToSummaryExcludingCursor:(id)a0;
- (char)isEquivalentToSummaryExcludingTimestamp:(id)a0;
- (char)isLiveType;
- (char)isSameContent:(id)a0;
- (void)resolveChannelID:(id /* block */)a0;

@end
