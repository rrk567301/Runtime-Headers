@class NSString, NSData;

@interface MRMicrophoneConnectionResponseMessage : MRProtocolMessage

@property (retain, nonatomic) NSString *rapportIdentifier;
@property (readonly, nonatomic) long long result;
@property (retain, nonatomic) NSData *pairingData;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithPairingData:(id)a0 rapportIdentifier:(id)a1;
- (id)initWithResult:(long long)a0 rapportIdentifier:(id)a1;

@end
