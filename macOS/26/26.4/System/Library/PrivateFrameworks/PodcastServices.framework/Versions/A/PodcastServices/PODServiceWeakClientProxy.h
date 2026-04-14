@class NSXPCInterface;

@interface PODServiceWeakClientProxy : NSObject

@property (readonly, nonatomic) NSXPCInterface *clientInterface;
@property (readonly, weak, nonatomic) id protocolHandler;

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithClientInterface:(id)a0 protocolHandler:(id)a1;

@end
