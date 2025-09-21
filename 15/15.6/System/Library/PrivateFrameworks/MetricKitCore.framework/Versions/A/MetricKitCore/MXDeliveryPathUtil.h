@class NSObject;
@protocol MXBundleUtilProtocol, OS_os_log, MXStorageUtilProtocol;

@interface MXDeliveryPathUtil : NSObject <MXDeliveryPathUtilProtocol>

@property (retain) id<MXStorageUtilProtocol> storageUtil;
@property (retain) id<MXBundleUtilProtocol> bundleUtil;
@property (retain) NSObject<OS_os_log> *logHandle;

- (void).cxx_destruct;
- (id)applicationContainerPath;
- (id)_applicationContainerPath;
- (char)_createDiagnosticDirectoryForDeliveryAtPath:(id)a0 forClient:(id)a1 withError:(id *)a2;
- (char)_createMetricDirectoryForDeliveryAtPath:(id)a0 forClient:(id)a1 withError:(id *)a2;
- (id)_diagnosticDeliveryDirectoryForAppContainerPath:(id)a0 forClient:(id)a1;
- (id)_filepathsFromDirectory:(id)a0 withError:(id *)a1;
- (id)_metricDeliveryDirectoryForAppContainerPath:(id)a0 forClient:(id)a1;
- (void)_protectDiagnosticUntilFirstUserAuthForPath:(id)a0 forClient:(id)a1 withError:(id *)a2;
- (void)_protectMetricUntilFirstUserAuthForPath:(id)a0 withError:(id *)a1;
- (id)applicationContainerPathForBundleID:(id)a0;
- (char)createDiagnosticDirectoryAtPath:(id)a0 forClient:(id)a1 withError:(id *)a2;
- (char)createMetricDirectoryAtPath:(id)a0 forClient:(id)a1 withError:(id *)a2;
- (id)diagnosticReportFilepathsFromClient:(id)a0 withError:(id *)a1;
- (id)filepathOfDiagnosticForDeliveryFromAppContainerPath:(id)a0 forClient:(id)a1 atDate:(id)a2;
- (id)filepathOfMetricForDeliveryFromAppContainerPath:(id)a0 forClient:(id)a1 atDate:(id)a2;
- (id)initWithStorageUtil:(id)a0 andBundleUtil:(id)a1;
- (id)metricReportFilepathsFromClient:(id)a0 withError:(id *)a1;

@end
