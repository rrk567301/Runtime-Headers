@class NSString, MRRequestDetails;

@interface MRMicrophoneConnectionRequestMessage : MRProtocolMessage

@property (retain, nonatomic) MRRequestDetails *details;
@property (retain, nonatomic) NSString *rapportIdentifier;

- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithDetails:(id)a0 rapportIdentifier:(id)a1;

@end
