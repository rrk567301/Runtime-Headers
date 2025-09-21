@class HMDRemoteMessage;

@interface RapportOverBLEQueuedMessage : NSObject

@property (readonly) HMDRemoteMessage *message;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 withCompletion:(id /* block */)a1;

@end
