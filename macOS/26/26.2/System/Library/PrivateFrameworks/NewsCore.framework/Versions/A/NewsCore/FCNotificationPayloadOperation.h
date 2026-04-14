@class NSArray;
@protocol FCContentContext;

@interface FCNotificationPayloadOperation : FCOperation {
    id<FCContentContext> _context;
    NSArray *_notificationItems;
    NSArray *_resultNotificationPayloads;
}

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)a0 notificationItems:(id)a1;

@end
