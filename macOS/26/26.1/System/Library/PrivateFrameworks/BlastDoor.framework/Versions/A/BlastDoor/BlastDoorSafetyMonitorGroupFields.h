@class NSString;

@interface BlastDoorSafetyMonitorGroupFields : NSObject {
    void /* unknown type, empty encoding */ safetyMonitorGroupFields;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) NSString *receiverHandle;
@property (nonatomic, readonly) NSString *sharingInvitationData;
@property (nonatomic, readonly) NSString *shareURL;
@property (nonatomic, readonly) NSString *participantID;

- (void).cxx_destruct;
- (id)init;

@end
