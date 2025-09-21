@class DAMailMessage;

@interface DADraftMessageRequest : DAMailboxRequest

@property (retain, nonatomic) DAMailMessage *message;
@property (nonatomic) char send;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRequestType:(int)a0 message:(id)a1 send:(char)a2;

@end
