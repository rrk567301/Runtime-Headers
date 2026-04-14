@class NSString;

@interface SMPairingCode : NSObject

@property (retain) NSString *digits;
@property (retain) NSString *accessPointPassword;

- (id)init;
- (void).cxx_destruct;
- (id)formattedRepresentation;
- (void)deriveAccessPointPassword;
- (id)generateRandomCode;

@end
