@class DADClient, NSString;

@interface DADClientDelegate : DADisableableObject

@property (weak, nonatomic) DADClient *client;
@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) char finished;
@property (nonatomic) char consumerCancelled;
@property (retain, nonatomic) NSString *delegateID;

- (void)dealloc;
- (void).cxx_destruct;
- (void)disable;
- (void)finishWithError:(id)a0;
- (id)initWithAccountID:(id)a0 client:(id)a1;
- (void)userRequestsCancel;

@end
