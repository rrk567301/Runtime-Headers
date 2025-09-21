@class NSString, NSXPCListener;

@interface MSVXPCListener : NSXPCListener {
    NSString *_registeredServiceName;
    NSXPCListener *_localProxy;
}

- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (void)activate;
- (void).cxx_destruct;
- (id)localProxy;

@end
