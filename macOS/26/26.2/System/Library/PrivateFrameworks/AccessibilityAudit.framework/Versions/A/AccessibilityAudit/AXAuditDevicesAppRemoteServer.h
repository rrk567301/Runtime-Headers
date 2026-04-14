@class NSString, DTXConnection;

@interface AXAuditDevicesAppRemoteServer : NSObject <AXPTranslationTransportCancellable, AXPTranslationTransportDelegate, AXAuditRemoteDeviceAPIDevice>

@property (retain, nonatomic) DTXConnection *connection;
@property (copy, nonatomic) id /* block */ axpTransportDataHandler;
@property (nonatomic) long long hostAPIVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTransport:(id)a0;
- (void)connectionInterrupted;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accessibilityTranslationTransportAddReceiveDataHandler:(id /* block */)a0;
- (void)accessibilityTranslationTransportSendData:(id)a0 completionHandler:(id /* block */)a1;
- (void)accessibilityTranslationTransportCancel;
- (void)clientNeedsAccessibility:(id)a0;
- (id)deviceAPIVersion;
- (void)processDataFromHost:(id)a0;
- (void)requestHostAPIVersion;
- (void)setMaxConnectionEnqueue:(unsigned long long)a0;

@end
