@class NSString, NSXPCListener;

@interface MSVXPCListener : NSXPCListener {
    NSString *_registeredServiceName;
    NSXPCListener *_localProxy;
}

- (void)invalidate;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)activate;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)localProxy;

@end
