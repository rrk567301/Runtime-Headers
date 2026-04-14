@class LNAppContext, NSMutableSet;

@interface LNExtensionConnectionHandler : NSObject <_EXMainConnectionHandler>

@property (retain, nonatomic) LNAppContext *appContext;
@property (retain, nonatomic) id principalObject;
@property (readonly, nonatomic) NSMutableSet *clientConnections;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPrincipalObject:(id)a0;
- (BOOL)shouldAcceptXPCConnection:(id)a0;

@end
