@class NSNumber, NSString, NSArray;

@interface HMDMediaPlaybackActionEvent : HMMLogEvent <HMDBiomeLogEvent>

@property (readonly) BOOL isPlaybackArchivePresent;
@property (readonly, copy) NSNumber *playbackStateNumber;
@property (readonly, copy) NSNumber *volumeNumber;
@property (readonly, copy) NSNumber *sourceNumber;
@property (readonly, copy) NSString *sourceClientName;
@property (readonly, copy) NSString *clientMetricIdentifier;
@property (readonly) unsigned long long numberOfMediaProfiles;
@property (readonly, copy) NSArray *accessories;
@property (readonly, nonatomic) unsigned long long numAccessoriesInHome;
@property (readonly, nonatomic) unsigned long long numNonEmptyScenesInHome;
@property (readonly, copy) NSString *playbackStateString;
@property (readonly, copy) NSString *sourceString;

- (void).cxx_destruct;
- (id)biomeEventsRepresentationForLogObserver:(id)a0;
- (id)initWithIsPlaybackArchivePresent:(BOOL)a0 playbackStateNumber:(id)a1 volumeNumber:(id)a2 sourceNumber:(id)a3 sourceClientName:(id)a4 accessories:(id)a5;

@end
