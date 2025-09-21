@class NSString, DTXConnection;

@interface AXAuditDevicesAppRemoteServer : NSObject <AXPTranslationTransportCancellable, AXPTranslationTransportDelegate, AXAuditRemoteDeviceAPIDevice>

@property (retain, nonatomic) DTXConnection *connection;
@property (copy, nonatomic) id /* block */ axpTransportDataHandler;
@property (nonatomic) long long hostAPIVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)resume;
- (void)connectionInterrupted;
- (id)initWithTransport:(id)a0;
- (void).cxx_destruct;
- (id)accessibilityTranslationTransportAddReceiveDataHandler:(id /* block */)a0;
- (void)accessibilityTranslationTransportSendData:(id)a0 completionHandler:(id /* block */)a1;
- (void)accessibilityTranslationTransportCancel;
- (void)clientNeedsAccessibility:(id)a0;
- (id)deviceAPIVersion;
- (void)processDataFromHost:(id)a0;
- (void)requestHostAPIVersion;
- (void)setMaxConnectionEnqueue:(unsigned long long)a0;

@end
