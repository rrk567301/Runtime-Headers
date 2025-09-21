@interface CWFAutoJoinRetryInterval : NSObject <NSCopying>

@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned long long count;
@property (nonatomic) char BSSChannelsOnly;
@property (nonatomic) unsigned long long maxBSSChannelCount;
@property (nonatomic) unsigned long long maxBSSChannelAge;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) char passiveScan;
@property (nonatomic) char allowAutoHotspotFallback;
@property (nonatomic) char includeAdjacent5GHzChannel;
@property (nonatomic) char alwaysIncludeRemainingNon2GHzChannels;
@property (nonatomic) char alwaysInclude6GHzPSCChannels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)autoJoinRetryInterval:(unsigned long long)a0 count:(unsigned long long)a1;

@end
