@interface CDPUtilities : NSObject

@property (class, readonly) BOOL hasFullCDPSupport;
@property (class, readonly) BOOL isInternalBuild;
@property (class, readonly) BOOL isDemoDevice;
@property (class, readonly) BOOL isMultiUserManateeFeatureEnabled;
@property (class, readonly) BOOL canEnableMultiUserManatee;
@property (class, readonly) BOOL deferSOSFromSignIn;
@property (class, readonly, nonatomic) BOOL isSilentEscrowRecordViabilityRepairEnabled;
@property (class, readonly, nonatomic) BOOL isAudioAccessory;
@property (class, readonly, nonatomic) BOOL isKeyboardOOPEnabled;
@property (class, readonly, nonatomic) BOOL isKeyboardOOPiPadEnabled;

@end
