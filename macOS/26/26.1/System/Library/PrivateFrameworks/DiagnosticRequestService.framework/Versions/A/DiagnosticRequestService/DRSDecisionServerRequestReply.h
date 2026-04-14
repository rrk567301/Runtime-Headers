@class NSNumber, NSString;

@interface DRSDecisionServerRequestReply : NSObject

@property (readonly, nonatomic) id request;
@property (readonly, nonatomic) NSNumber *acceptedNum;
@property (readonly, nonatomic) NSString *rejectionReason;
@property (readonly, nonatomic) NSString *errorString;

- (void).cxx_destruct;
- (id)initWithOriginalRequest:(id)a0 errorString:(id)a1;
- (id)initWithOriginalRequest:(id)a0 reply:(id)a1;
- (id)initWithOriginalRequest:(id)a0 requestAccepted:(BOOL)a1 rejectionReason:(id)a2;

@end
