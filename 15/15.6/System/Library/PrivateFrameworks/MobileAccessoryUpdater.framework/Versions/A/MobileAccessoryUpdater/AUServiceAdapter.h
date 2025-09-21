@class NSString, NSXPCConnection;
@protocol FudPlugin;

@interface AUServiceAdapter : NSObject <AUServiceProtocol, FudPluginDelegate>

@property (readonly, nonatomic) id<FudPlugin> updater;
@property (nonatomic) NSXPCConnection *activeConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_init;
- (void)progress:(double)a0;
- (char)hasActiveConnection;
- (void)accessoryDisconnected:(id)a0;
- (void)log:(int)a0 format:(id)a1;
- (void)findFirmwareWithOptions:(id)a0 remote:(char)a1;
- (void)applyFirmwareWithOptions:(id)a0;
- (void)bootstrapWithOptions:(id)a0;
- (void)deviceClassAttached:(id)a0 options:(id)a1 withReply:(id /* block */)a2;
- (void)didApply:(char)a0 info:(id)a1 error:(id)a2;
- (void)didBootstrap:(char)a0 info:(id)a1 error:(id)a2;
- (void)didDownload:(char)a0 info:(id)a1 error:(id)a2;
- (void)didFind:(char)a0 info:(id)a1 updateAvailable:(char)a2 needsDownload:(char)a3 error:(id)a4;
- (void)didFinish:(char)a0 info:(id)a1 error:(id)a2;
- (void)didPrepare:(char)a0 info:(id)a1 error:(id)a2;
- (void)downloadFirmwareWithOptions:(id)a0;
- (void)finishWithOptions:(id)a0;
- (void)issueNotification:(id)a0;
- (void)logv:(int)a0 format:(id)a1 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a2;
- (void)personalizationRequest:(id)a0;
- (void)personalizationResponse:(id)a0 response:(id)a1 status:(id)a2;
- (void)prepareFirmwareWithOptions:(id)a0;
- (void)queryDeviceList:(id /* block */)a0;
- (void)reportAnalytics:(id)a0 info:(id)a1;

@end
