@class NSString;

@interface SMPairingCode : NSObject

@property (retain) NSString *digits;

- (id)init;
- (id)formattedRepresentation;
- (void).cxx_destruct;
- (id)generateRandomCode;

@end
