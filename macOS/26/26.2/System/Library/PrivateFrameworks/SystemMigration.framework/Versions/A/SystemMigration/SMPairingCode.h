@class NSString;

@interface SMPairingCode : NSObject

@property (retain) NSString *digits;

- (void).cxx_destruct;
- (id)formattedRepresentation;
- (id)init;
- (id)generateRandomCode;

@end
