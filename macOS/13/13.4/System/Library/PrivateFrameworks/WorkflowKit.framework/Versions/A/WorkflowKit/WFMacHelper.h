@class NSString, NSXPCConnection;

@interface WFMacHelper : NSObject <WFMacHelperXPCProtocol>

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) BOOL wasStopped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (void)authorizeAndInstallPrivilegedHelperWithPrompt:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelDiskImageCreation;
- (id)createDiskImageWithFiles:(id)a0 volumeName:(id)a1 sizeToFit:(BOOL)a2 imageSizeInMegabytes:(double)a3 encryptImage:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)killCommandWithCompletionHandler:(id /* block */)a0;
- (void)mountDiskImages:(id)a0 completionHandler:(id /* block */)a1;
- (void)mountServerVolumeAtURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)runCommandAtURL:(id)a0 arguments:(id)a1 workingDirectory:(id)a2 inputFile:(id)a3 stdoutURL:(id)a4 stderrURL:(id)a5 completionHandler:(id /* block */)a6;
- (void)runOSAScriptWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopScriptWithCompletionHandler:(id /* block */)a0;
- (void)addDropletToDockForWorkflowReference:(id)a0 completion:(id /* block */)a1;
- (void)compileScript:(id)a0 languageName:(id)a1 completionHandler:(id /* block */)a2;
- (void)consumeSandboxExtension:(id)a0;

@end
