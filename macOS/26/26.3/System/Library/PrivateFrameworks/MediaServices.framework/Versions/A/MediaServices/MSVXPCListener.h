@class NSString, NSXPCListener;

@interface MSVXPCListener : NSXPCListener {
    NSString *_registeredServiceName;
    NSXPCListener *_localProxy;
}

- (void)invalidate;
- (id)initWithMachServiceName:(id)a0;
- (void)setDelegate:(id)a0;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (void)dealloc;
- (void)activate;
- (id)localProxy;

@end
