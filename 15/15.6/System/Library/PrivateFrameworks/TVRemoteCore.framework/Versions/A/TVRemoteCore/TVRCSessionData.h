@class NSString, NSDate;

@interface TVRCSessionData : NSObject

@property (retain, nonatomic) NSDate *sessionStartTime;
@property (nonatomic) char usedRTI;
@property (nonatomic) char usedSiri;
@property (nonatomic) char requiredPairing;
@property (nonatomic) char directionalControlsEnabled;
@property (copy, nonatomic) NSString *launchContextDesc;

- (void).cxx_destruct;

@end
