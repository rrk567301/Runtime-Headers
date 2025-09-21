@class EKEventStore;

@interface EKEventFetchRequestToken : NSObject <EKFetchRequestToken>

@property (readonly, weak, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) unsigned int token;

- (void)cancel;
- (id)initWithEventStore:(id)a0 token:(int)a1;
- (void).cxx_destruct;

@end
