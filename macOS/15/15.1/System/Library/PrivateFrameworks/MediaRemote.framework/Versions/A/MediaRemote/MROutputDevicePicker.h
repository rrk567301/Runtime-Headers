@class NSXPCListener, NSString, NSXPCConnection, MROutputDeviceConfiguration;

@interface MROutputDevicePicker : NSObject <NSXPCListenerDelegate, MROutputDevicePickerProtocol>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) MROutputDeviceConfiguration *configuration;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)reset;
- (id)initWithConfiguration:(id)a0;
- (void)dismiss;
- (void)present;
- (void)openConnection;
- (void)tappedCustomRowIdentifier:(id)a0;

@end
