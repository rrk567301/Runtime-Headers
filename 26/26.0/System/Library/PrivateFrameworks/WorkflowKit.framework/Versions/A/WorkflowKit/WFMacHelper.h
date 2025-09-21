@class NSString, NSXPCConnection;

@interface WFMacHelper : NSObject <WFMacHelperXPCProtocol>

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (nonatomic) BOOL wasStopped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDropletToDockForLNAction:(id)a0 dropletTitle:(id)a1 iconData:(id)a2 bundleIdentifier:(id)a3 completion:(id /* block */)a4;
- (id)initWithMachServiceName:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)authorizeAndInstallPrivilegedHelperWithPrompt:(id)a0 workflowID:(id)a1 completionHandler:(id /* block */)a2;
- (void)cancelDiskImageCreation;
- (id)createDiskImageWithFiles:(id)a0 volumeName:(id)a1 sizeToFit:(BOOL)a2 imageSizeInMegabytes:(double)a3 encryptImage:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)createFolderAtPath:(id)a0 inDirectory:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteFilesAtURLs:(id)a0 deleteImmediately:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)killCommandWithCompletionHandler:(id /* block */)a0;
- (void)labelFilesAtURLs:(id)a0 label:(id)a1 completionHandler:(id /* block */)a2;
- (void)mountDiskImages:(id)a0 completionHandler:(id /* block */)a1;
- (void)mountServerVolumeAtURLs:(id)a0 completionHandler:(id /* block */)a1;
- (void)moveFileAtURL:(id)a0 toURL:(id)a1 replaceExisting:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)runCommandAtURL:(id)a0 arguments:(id)a1 workingDirectory:(id)a2 inputFile:(id)a3 takesResponsibility:(BOOL)a4 stdoutURL:(id)a5 stderrURL:(id)a6 completionHandler:(id /* block */)a7;
- (void)runOSAScriptWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)stopScriptWithCompletionHandler:(id /* block */)a0;
- (void)addDropletToDockForWorkflowReference:(id)a0 completion:(id /* block */)a1;
- (void)compileScript:(id)a0 languageName:(id)a1 completionHandler:(id /* block */)a2;
- (void)consumeSandboxExtension:(id)a0;
- (void)moveFilesAtURLs:(id)a0 toURL:(id)a1 completionHandler:(id /* block */)a2;

@end
