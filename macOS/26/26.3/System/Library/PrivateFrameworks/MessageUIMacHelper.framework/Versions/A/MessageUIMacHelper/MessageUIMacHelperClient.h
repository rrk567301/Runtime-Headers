@class NSXPCConnection;

@interface MessageUIMacHelperClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)canSendMail;

@end
