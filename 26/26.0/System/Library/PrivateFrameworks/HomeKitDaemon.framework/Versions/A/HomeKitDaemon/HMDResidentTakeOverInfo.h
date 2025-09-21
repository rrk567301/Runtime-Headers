@class HMDResidentDevice;
@protocol HMDResidentDeviceManagerContext;

@interface HMDResidentTakeOverInfo : NSObject

@property (readonly, weak, nonatomic) id<HMDResidentDeviceManagerContext> context;
@property (nonatomic) unsigned long long takeOverTrigger;
@property (nonatomic) unsigned long long takeOverFinding;
@property (retain, nonatomic) HMDResidentDevice *bestCandidateForPrimary;
@property (nonatomic) unsigned long long ourPositionInList;
@property (nonatomic) unsigned long long totalResidentCount;
@property (nonatomic) BOOL weAreQualifiedToTakeOver;
@property (nonatomic) long long viablePrimaryResult;
@property (nonatomic) BOOL hasViablePrimary;
@property (nonatomic) BOOL finalDecision;

- (id)description;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 takeOverTrigger:(unsigned long long)a1;

@end
