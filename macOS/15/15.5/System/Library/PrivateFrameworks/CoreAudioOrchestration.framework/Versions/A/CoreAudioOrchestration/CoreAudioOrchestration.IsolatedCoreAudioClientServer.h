@interface CoreAudioOrchestration.IsolatedCoreAudioClientServer : NSObject

+ (int)InstallLapseHandlerWithLapseHandler:(void /* function */ *)a0 clientData:(void *)a1;
+ (int)StartIOAtTimeWithHostTime:(unsigned long long)a0;
+ (int)StartIO;
+ (int)InstallCallbackWithIoProc:(void /* function */ *)a0 clientData:(void *)a1;
+ (int)StopIO;
+ (int)UninstallCallback;

- (id)init;

@end
