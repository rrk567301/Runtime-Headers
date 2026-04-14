@class NSString, NSXPCListener;

@interface MSVXPCListener : NSXPCListener {
    NSString *_registeredServiceName;
    NSXPCListener *_localProxy;
}

- (void)resume;
- (id)initWithMachServiceName:(id)a0;
- (void)activate;
- (void)suspend;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)localProxy;

@end
