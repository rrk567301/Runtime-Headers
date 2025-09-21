@class NSXPCConnection;

@interface MessageUIMacHelperClient : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)canSendMail;

@end
