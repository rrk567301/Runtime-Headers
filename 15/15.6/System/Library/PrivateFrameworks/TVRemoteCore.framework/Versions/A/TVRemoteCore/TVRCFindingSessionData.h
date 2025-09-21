@class NSDate;

@interface TVRCFindingSessionData : NSObject

@property (retain, nonatomic) NSDate *sessionStartTime;
@property (retain, nonatomic) NSDate *sessionEndTime;
@property (retain, nonatomic) NSDate *firstMeasurementTime;
@property (nonatomic) char remoteIsConnectedToATV;
@property (nonatomic) double startingProximityMeasurement;
@property (nonatomic) double endingProximityMeasurement;
@property (nonatomic) long long numberOfGotCloserRegionTransitions;
@property (nonatomic) long long numberOfGotFartherRegionTransitions;
@property (nonatomic) char gotToHere;
@property (nonatomic) double timeToHere;

- (void).cxx_destruct;

@end
