@class NSData;

@interface MIBUChallengeResponse : MIBUNFCResponse

@property (retain, nonatomic) NSData *signatureBlob;
@property (retain, nonatomic) NSData *certChainBlob;

- (id)serialize;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_deserialize:(id)a0;

@end
