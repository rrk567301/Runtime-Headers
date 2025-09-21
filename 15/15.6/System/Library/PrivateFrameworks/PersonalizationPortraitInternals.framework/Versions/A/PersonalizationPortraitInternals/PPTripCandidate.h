@class NSArray;

@interface PPTripCandidate : NSObject

@property (retain, nonatomic) NSArray *flights;
@property (retain, nonatomic) NSArray *hotels;
@property (retain, nonatomic) NSArray *others;
@property (retain, nonatomic) NSArray *groundTransports;

- (void).cxx_destruct;
- (char)canBeMergedWithTripCandidate:(id)a0;
- (char)canBeMergedWithTripCandidate:(id)a0 supportsGroundTransportEvents:(char)a1;
- (id)initWithTripCandidateA:(id)a0 andTripCandidateB:(id)a1;
- (char)shouldPromoteToTripEvent;
- (id)tripEventFromCandidate;

@end
