@class NSString, MRRequestDetails;

@interface MRMicrophoneConnectionRequestMessage : MRProtocolMessage

@property (retain, nonatomic) MRRequestDetails *details;
@property (retain, nonatomic) NSString *rapportIdentifier;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithDetails:(id)a0 rapportIdentifier:(id)a1;

@end
