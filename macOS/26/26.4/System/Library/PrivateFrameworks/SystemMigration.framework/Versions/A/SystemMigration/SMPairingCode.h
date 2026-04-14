@class NSString;

@interface SMPairingCode : NSObject

@property (retain) NSString *digits;

- (id)formattedRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)generateRandomCode;

@end
