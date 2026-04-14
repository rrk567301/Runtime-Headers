@class NSString, NSXPCListener;

@interface MSVXPCListener : NSXPCListener {
    NSString *_registeredServiceName;
    NSXPCListener *_localProxy;
}

- (void)resume;
- (void)suspend;
- (void)setDelegate:(id)a0;
- (void)invalidate;
- (id)initWithMachServiceName:(id)a0;
- (void)activate;
- (void)dealloc;
- (void).cxx_destruct;
- (id)localProxy;

@end
