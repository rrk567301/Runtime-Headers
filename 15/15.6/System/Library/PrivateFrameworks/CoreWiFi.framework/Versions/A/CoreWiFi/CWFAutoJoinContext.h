@class NSOrderedSet, NSArray, CWFAutoJoinParameters;

@interface CWFAutoJoinContext : NSObject <NSCopying>

@property (copy, nonatomic) CWFAutoJoinParameters *autoJoinParameters;
@property (copy, nonatomic) NSOrderedSet *knownNetworks;
@property (copy, nonatomic) NSArray *recentChannelList;
@property (copy, nonatomic) NSArray *remainingChannelList;
@property (copy, nonatomic) NSArray *SSIDList;
@property (copy, nonatomic) NSArray *ANQPElementIDList;
@property (nonatomic) unsigned long long maxScanChannelCount;
@property (nonatomic) char BSSChannelsOnly;
@property (nonatomic) unsigned long long maxBSSChannelCount;
@property (nonatomic) unsigned long long maxBSSChannelAge;
@property (nonatomic) unsigned long long maxScanSSIDCount;
@property (nonatomic) unsigned long long maxHiddenKnownNetworkSSIDAge;
@property (nonatomic) unsigned long long maxScanCacheAge;
@property (nonatomic) unsigned long long maxANQPCacheAge;
@property (nonatomic) unsigned long long maxScanCycles;
@property (nonatomic) long long minRSSI;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) char passiveScan;
@property (nonatomic) char cacheOnly;
@property (nonatomic) char useCacheForPreviouslyScannedChannels;
@property (nonatomic) double minBSSLocationAccuracy;
@property (nonatomic) double maxBSSLocationDistance;
@property (nonatomic) char includeAdjacent5GHzChannel;
@property (nonatomic) char allowStandalone6GHz;
@property (nonatomic) char include6GHzChannels;
@property (nonatomic) char alwaysIncludeRemainingNon2GHzChannels;
@property (nonatomic) char allowDeferredCandidates;
@property (nonatomic) char didForceAllRemainingChannels;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualToAutoJoinContext:(id)a0;

@end
