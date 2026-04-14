@class NSData;

@interface MIBUChallengeResponse : MIBUNFCResponse

@property (retain, nonatomic) NSData *signatureBlob;
@property (retain, nonatomic) NSData *certChainBlob;

- (void).cxx_destruct;
- (id)serialize;
- (id)init;
- (BOOL)_deserialize:(id)a0;

@end
