@class NSString, NSFileManager, APUnfairLock;

@interface APConfigurationResponseHandler : NSObject

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSString *pathToTempDir;
@property (readonly, nonatomic) NSString *pathToConfig;
@property (readonly, nonatomic) NSString *pathToTraverse;
@property (retain, nonatomic) APUnfairLock *lock;
@property (nonatomic) char cancelled;

- (id)init;
- (void).cxx_destruct;
- (char)_isCancelled;
- (long long)_processData:(id)a0;
- (id)_tempConfigPath;
- (long long)_configurationVersion;
- (char)_copyCurrentConfigToTraverse;
- (char)_createTempDirectory;
- (char)_removeTempDirectory;
- (char)_replaceConfigWithNewHierarchy;
- (void)_sendCoreAnalyticsWithUpdateStatus:(long long)a0 version:(long long)a1;
- (char)_testingFlag;
- (long long)_traverseDirectoryAtPath:(id)a0 replacingConfigurationAtPath:(id)a1;
- (char)_writeCompressedFileWithData:(id)a0 atPath:(id)a1;
- (void)cancelProcess;
- (char)processResponseWithData:(id)a0;

@end
