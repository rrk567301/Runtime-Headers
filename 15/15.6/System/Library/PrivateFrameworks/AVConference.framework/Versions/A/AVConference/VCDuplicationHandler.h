@interface VCDuplicationHandler : NSObject {
    unsigned char _duplicationState;
    unsigned char _duplicationReason;
    char _moreThanOneConnectionAvailable;
    struct { char isAlertEnabled; unsigned char connectionWiFiCount; unsigned char connectionCellCount; char isDuplicationDisabledDueToAlert; } _localAlertInfo;
    struct { char isAlertEnabled; unsigned char connectionWiFiCount; unsigned char connectionCellCount; char isDuplicationDisabledDueToAlert; } _remoteAlertInfo;
    char _forceDisableDuplication;
}

@property (readonly) char isDuplicationPending;
@property char isRemotePreAzul;
@property char iRATDuplicationEnabled;
@property char allowDuplication;
@property char isUserMoving;

- (id)init;

@end
