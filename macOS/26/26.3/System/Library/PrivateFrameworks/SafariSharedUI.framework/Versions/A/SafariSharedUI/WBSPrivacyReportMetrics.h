@class NSString;

@interface WBSPrivacyReportMetrics : NSObject

@property (nonatomic) unsigned long long numberOfTrackers;
@property (nonatomic) double ratioOfTrackedFirstPartiesToAllVisited;
@property (retain, nonatomic) NSString *mostSeenKnownTrackerDomain;
@property (nonatomic) unsigned long long mostSeenKnownTrackerFirstParties;

- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;

@end
