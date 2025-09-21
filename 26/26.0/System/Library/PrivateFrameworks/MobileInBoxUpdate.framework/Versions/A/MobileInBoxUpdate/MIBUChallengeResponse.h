@class NSData;

@interface MIBUChallengeResponse : MIBUNFCResponse

@property (retain, nonatomic) NSData *signatureBlob;
@property (retain, nonatomic) NSData *certChainBlob;

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)_deserialize:(id)a0;

@end
