@class NSString;

@interface BWFigCaptureDeviceClient : NSObject

@property (readonly, nonatomic) int clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *applicationID;
@property (readonly, nonatomic) NSString *clientDescription;
@property (readonly, nonatomic) int clientPriority;
@property (readonly, nonatomic) char canStealFromClientsWithSamePriority;
@property (readonly, nonatomic) char deviceSharingWithOtherClientsAllowed;
@property (readonly, nonatomic) int clientType;
@property (copy, nonatomic) id /* block */ deviceAvailabilityChangedHandler;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (char)isEqual:(id)a0;
- (char)canShareRegistrationWithClientPID:(int)a0 deviceAvailabilityChangedHandler:(id /* block */)a1;
- (id)initWithPID:(int)a0 clientApplicationID:(id)a1 clientDescription:(id)a2 clientPriority:(int)a3 canStealFromClientsWithSamePriority:(char)a4 deviceSharingWithOtherClientsAllowed:(char)a5 clientType:(int)a6 deviceAvailabilityChangedHandler:(id /* block */)a7;

@end
