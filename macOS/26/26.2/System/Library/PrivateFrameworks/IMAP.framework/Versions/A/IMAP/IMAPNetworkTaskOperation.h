@class NSString, IMAPNetworkTaskHandler;

@interface IMAPNetworkTaskOperation : MCTaskHandlerOperation

@property (retain) IMAPNetworkTaskHandler *handler;
@property (retain, nonatomic) NSString *mailboxName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMailboxName:(id)a0;

@end
