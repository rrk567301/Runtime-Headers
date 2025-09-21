@class NSSet, GTServiceProperties, NSMutableDictionary, GTServiceConnection;

@interface GTMTLCaptureServiceXPCProxy : NSObject <GTMTLCaptureService> {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    NSMutableDictionary *_observerIdToPort;
}

@property (readonly, retain, nonatomic) GTServiceProperties *serviceProperties;

- (void)abort;
- (unsigned long long)registerObserver:(id)a0;
- (void)stop;
- (void)resume;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)update:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)nextRequestID;
- (id)query:(id)a0;
- (void)deregisterObserver:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (id)createCaptureDescriptor;
- (id)startWithDescriptor:(id)a0 completionHandler:(id /* block */)a1;

@end
