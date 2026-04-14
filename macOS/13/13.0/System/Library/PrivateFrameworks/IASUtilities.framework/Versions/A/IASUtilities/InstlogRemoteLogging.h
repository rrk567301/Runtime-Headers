@class NSPipe, NSMutableDictionary, ILCConnection;

@interface InstlogRemoteLogging : NSObject <ILCConnectionDelegate>

@property (retain) ILCConnection *logServerConnection;
@property int state;
@property (retain) NSPipe *logFilePipe;
@property (retain) NSMutableDictionary *fileKeyToPath;

+ (id)nvramStringForKey:(id)a0;
+ (BOOL)shouldDoRemoteLogging;

- (id)init;
- (void).cxx_destruct;
- (void)connectionDidStart:(id)a0;
- (void)connectionDidConnect:(id)a0;
- (void)connectionDidFail:(id)a0 error:(id)a1;
- (void)connectionDidEnd:(id)a0;
- (void)rebootMachine;
- (id)sysdiganoseFilenames;
- (void)gatherSysdiagnoseDataWithHandles:(id)a0;
- (void)sysdiagnoseDidFailForFiles:(id)a0;
- (void)sysdiagnoseDidSucceedForFiles:(id)a0;
- (BOOL)waitForSuccessfulConnection;
- (BOOL)sendLogString:(char *)a0;
- (void)sendSysdiagnose;

@end
