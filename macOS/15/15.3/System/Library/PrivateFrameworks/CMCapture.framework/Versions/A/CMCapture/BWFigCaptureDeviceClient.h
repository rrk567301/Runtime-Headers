@class NSString;

@interface BWFigCaptureDeviceClient : NSObject

@property (readonly, nonatomic) int clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *clientDescription;
@property (readonly, nonatomic) int clientPriority;
@property (readonly, nonatomic) BOOL canStealFromClientsWithSamePriority;
@property (readonly, nonatomic) BOOL deviceSharingWithOtherClientsAllowed;
@property (readonly, nonatomic) BOOL deviceSharingWithFlashlightAllowed;
@property (readonly, nonatomic) BOOL clientIsShareableFlashlight;
@property (copy, nonatomic) id /* block */ deviceAvailabilityChangedHandler;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)canShareRegistrationWithClientPID:(int)a0 deviceAvailabilityChangedHandler:(id /* block */)a1;
- (id)initWithPID:(int)a0 clientApplicationID:(id)a1 clientDescription:(id)a2 clientPriority:(int)a3 canStealFromClientsWithSamePriority:(BOOL)a4 deviceSharingWithOtherClientsAllowed:(BOOL)a5 deviceSharingWithFlashlightAllowed:(BOOL)a6 clientIsShareableFlashlight:(BOOL)a7 deviceAvailabilityChangedHandler:(id /* block */)a8;

@end
