@class NSString, NSMutableArray;

@interface BWFigCaptureDeviceClient : NSObject

@property (readonly, nonatomic) int clientID;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *clientDescription;
@property (readonly, nonatomic) int clientPriority;
@property (readonly, nonatomic) BOOL canStealFromClientsWithSamePriority;
@property (readonly, nonatomic) BOOL deviceSharingWithOtherClientsAllowed;
@property (copy, nonatomic) id /* block */ deviceAvailabilityChangedHandler;
@property (retain, nonatomic) NSMutableArray *portTypesAllowingStreamControlLoss;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithPID:(int)a0 clientDescription:(id)a1 clientPriority:(int)a2 canStealFromClientsWithSamePriority:(BOOL)a3 deviceSharingWithOtherClientsAllowed:(BOOL)a4 deviceAvailabilityChangedHandler:(id /* block */)a5;
- (BOOL)canShareDeviceWithClientPID:(int)a0 deviceAvailabilityChangedHandler:(id /* block */)a1;

@end
