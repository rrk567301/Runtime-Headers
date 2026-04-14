@class MRRequestDetails;

@interface MRRequestGroupSessionMessage : MRProtocolMessage

@property (retain, nonatomic) MRRequestDetails *details;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithDetails:(id)a0;

@end
