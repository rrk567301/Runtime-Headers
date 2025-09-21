@class NSString;

@interface BWFigCaptureDeviceClient : NSObject

@property (readonly, nonatomic) int clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *clientDescription;
@property (nonatomic) int clientPriority;
@property (readonly, nonatomic) BOOL canStealFromClientsWithSamePriority;
@property (readonly, nonatomic) BOOL deviceSharingWithOtherClientsAllowed;
@property (readonly, nonatomic) int clientType;
@property (copy, nonatomic) id /* block */ deviceAvailabilityChangedHandler;
@property (readonly, nonatomic) BOOL canShareWithFlashlightAndVibeMitigation;

- (id)initWithPID:(int)a0 clientApplicationID:(id)a1 clientDescription:(id)a2 clientPriority:(int)a3 canStealFromClientsWithSamePriority:(BOOL)a4 deviceSharingWithOtherClientsAllowed:(BOOL)a5 clientType:(int)a6 deviceAvailabilityChangedHandler:(id /* block */)a7;
- (id)debugDescription;
- (void)dealloc;
- (BOOL)canShareRegistrationWithClientPID:(int)a0 deviceAvailabilityChangedHandler:(id /* block */)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
