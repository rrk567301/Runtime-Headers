@class NSString, NSData, NSDictionary;

@interface MPMusicPlayerQueueDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (nonatomic) char disableQueueModifications;
@property (nonatomic) long long shuffleType;
@property (nonatomic) long long repeatType;
@property (nonatomic, setter=setPrivate:) char isPrivate;
@property (readonly, nonatomic) NSString *requestingBundleIdentifier;
@property (readonly, nonatomic) NSString *requestingBundleVersion;
@property (copy, nonatomic) NSString *playActivityQueueGroupingID;
@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (readonly, nonatomic) NSDictionary *startTimes;
@property (readonly, nonatomic) NSDictionary *endTimes;
@property (nonatomic) char prioritizeStartupOverQuality;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)_setEndTime:(double)a0 forIdentifiers:(id)a1;
- (void)_setStartTime:(double)a0 forIdentifiers:(id)a1;

@end
