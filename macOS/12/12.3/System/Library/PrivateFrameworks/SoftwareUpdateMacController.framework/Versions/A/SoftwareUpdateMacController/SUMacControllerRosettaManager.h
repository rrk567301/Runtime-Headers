@class NSString, SUCoreLog, NSObject, OAHSoftwareUpdateController;
@protocol OS_dispatch_queue;

@interface SUMacControllerRosettaManager : NSObject

@property (readonly, retain, nonatomic) OAHSoftwareUpdateController *rosettaController;
@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, retain, nonatomic) NSString *uuid;

+ (id)_defaultDownloadDirectory;
+ (BOOL)shouldPerformRosettaUpdate;
+ (void)cleanupDefaultDownloadPath;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (id)summary;
- (id)packageSpecifiersPaths;
- (void)_callScanCompletion:(id /* block */)a0 performUpdate:(BOOL)a1 version:(id)a2 withError:(id)a3;
- (void)_callDownloadCompletion:(id /* block */)a0 success:(BOOL)a1 error:(id)a2;
- (id)_ensureDownloadDirectoryWithOverrides:(id)a0 error:(id *)a1;
- (void)_callDownloadProgressBlock:(id /* block */)a0 withProgress:(id)a1;
- (void)locateAvailableRosettaUpdatesForDescriptor:(id)a0 withOverrides:(id)a1 completion:(id /* block */)a2;
- (void)downloadRosettaUpdateForDescriptor:(id)a0 withOverrides:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end
