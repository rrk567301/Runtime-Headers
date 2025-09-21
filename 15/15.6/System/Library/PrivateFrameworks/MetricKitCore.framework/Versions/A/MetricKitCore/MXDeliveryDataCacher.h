@class NSString, NSObject;
@protocol MXDeliveryPathUtilProtocol, OS_os_log, MXStorageUtilProtocol, MXClientUtilProtocol;

@interface MXDeliveryDataCacher : NSObject <MXDeliveryDataCacherProtocol>

@property (retain) id<MXClientUtilProtocol> clientUtil;
@property (retain) id<MXDeliveryPathUtilProtocol> deliveryPathUtil;
@property (retain) id<MXStorageUtilProtocol> storageUtil;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_diagnosticsFromFilepaths:(id)a0;
- (id)_metricsFromFilepaths:(id)a0;
- (char)_writeDiagnosticReport:(id)a0 atAppContainerPath:(id)a1 forClient:(id)a2 withError:(id *)a3;
- (char)_writeMetricReport:(id)a0 atAppContainerPath:(id)a1 forClient:(id)a2 withError:(id *)a3;
- (id)diagnosticsForClient:(id)a0;
- (id)initWithClientUtil:(id)a0 andDeliveryPathUtil:(id)a1 andStorageUtil:(id)a2;
- (id)metricsForClient:(id)a0;
- (void)notifyDataAvailableForDelivery;
- (char)saveDiagnostic:(id)a0 toDeliveryDirectoryForBundleID:(id)a1;
- (char)saveMetrics:(id)a0 toDeliveryDirectoryForBundleID:(id)a1;
- (char)writeDiagnosticReport:(id)a0 atAppContainerPath:(id)a1 forClient:(id)a2 withError:(id *)a3;
- (char)writeMetricReport:(id)a0 atAppContainerPath:(id)a1 forClient:(id)a2 withError:(id *)a3;

@end
