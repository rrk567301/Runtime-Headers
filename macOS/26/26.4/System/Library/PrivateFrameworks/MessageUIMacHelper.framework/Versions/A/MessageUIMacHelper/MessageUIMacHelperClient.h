@class NSXPCConnection;

@interface MessageUIMacHelperClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (BOOL)canSendMail;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
