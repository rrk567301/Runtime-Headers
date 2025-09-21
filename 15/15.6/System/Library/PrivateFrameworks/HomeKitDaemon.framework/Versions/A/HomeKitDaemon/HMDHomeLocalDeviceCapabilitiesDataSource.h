@class NSString;

@interface HMDHomeLocalDeviceCapabilitiesDataSource : NSObject <HMDHomeLocalDeviceCapabilitiesDataSource>

@property (readonly) char supportsHomeKitDataStream;
@property (readonly) char isResidentCapable;
@property (readonly) char supportsHomeInvitation;
@property (readonly) char supportsRemoteAccess;
@property (readonly) char supportsAddingAccessory;
@property (readonly) char supportsHomeNotificationEnablement;
@property (readonly) char isCompanionCapable;
@property (readonly) char supportsBulletinBoard;
@property (readonly) char supportsSiriUnsecuringActionsWithWatchAuth;
@property (readonly) char supportsSiriUnsecuringActionsWithNoPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
