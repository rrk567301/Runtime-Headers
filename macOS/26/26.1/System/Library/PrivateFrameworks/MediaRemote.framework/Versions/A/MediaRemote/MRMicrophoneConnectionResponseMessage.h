@class NSString, NSData;

@interface MRMicrophoneConnectionResponseMessage : MRProtocolMessage

@property (retain, nonatomic) NSString *rapportIdentifier;
@property (readonly, nonatomic) long long result;
@property (retain, nonatomic) NSData *pairingData;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithPairingData:(id)a0 rapportIdentifier:(id)a1;
- (id)initWithResult:(long long)a0 rapportIdentifier:(id)a1;

@end
