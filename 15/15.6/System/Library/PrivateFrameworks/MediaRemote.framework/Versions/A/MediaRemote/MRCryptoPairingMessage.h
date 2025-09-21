@class NSData;

@interface MRCryptoPairingMessage : MRProtocolMessage

@property (readonly, nonatomic) NSData *pairingData;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic, getter=isRetrying) char retrying;
@property (readonly, nonatomic, getter=isUsingSystemPairing) char usingSystemPairing;
@property (readonly, nonatomic) unsigned long long state;

- (unsigned long long)type;
- (unsigned long long)encryptionType;
- (id)initWithPairingData:(id)a0 status:(int)a1;
- (id)initWithPairingData:(id)a0 status:(int)a1 isRetrying:(char)a2 isUsingSystemPairing:(char)a3 state:(unsigned long long)a4;

@end
