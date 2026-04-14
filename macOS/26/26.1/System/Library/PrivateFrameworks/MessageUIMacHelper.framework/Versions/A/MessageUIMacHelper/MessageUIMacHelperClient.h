@class NSXPCConnection;

@interface MessageUIMacHelperClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)canSendMail;
- (id)init;

@end
