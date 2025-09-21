@class NSString;

@interface DRSDecisionServerRequestReply : NSObject

@property (readonly, nonatomic) id request;
@property (readonly, nonatomic) char requestAccepted;
@property (readonly, nonatomic) NSString *rejectionReason;

- (void).cxx_destruct;
- (id)initWithOriginalRequest:(id)a0 reply:(id)a1;
- (id)initWithOriginalRequest:(id)a0 requestAccepted:(char)a1 rejectionReason:(id)a2;

@end
