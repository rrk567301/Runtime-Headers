@class NSObject;
@protocol OS_dispatch_queue;

@interface SCDAEmergencyCallPunchout : NSObject {
    NSObject<OS_dispatch_queue> *_myriadEmergencyCallingQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)initiateEmergencyCallMyriad;

@end
