@class CalXPCConnectionListenerProvider;

@interface CalClientLink : NSObject

@property (retain) CalXPCConnectionListenerProvider *connectionListenerProvider;

+ (void)initialize;
+ (id)startWithMachServiceName:(id)a0 exportedObject:(id)a1;
+ (void)performBlockWithAllClients:(id /* block */)a0;
+ (id)sharedInstanceWithMachServiceName:(id)a0;
+ (id)sharedInstances;
+ (void)sendToClients:(SEL)a0 withObject:(id)a1 withObject:(id)a2;
+ (void)tearDownAllInstances;

- (void).cxx_destruct;
- (void)tearDown;
- (id)initWithMachServiceName:(id)a0 exportedObject:(id)a1;
- (void)_performBlockWithAllClients:(id /* block */)a0;

@end
