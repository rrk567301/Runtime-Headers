@class NSString, NSXPCConnection;
@protocol OSASubmissionServices;

@interface OSASubmissionClient : NSObject <OSASubmissionServices> {
    NSXPCConnection *_connection;
    id<OSASubmissionServices> _synchRemoteObjectProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)submissionOptionsFromClientOptions:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)submit;
- (BOOL)overrideMountPath;
- (void).cxx_destruct;
- (void)canSubmitLogOfType:(id)a0 withReply:(id /* block */)a1;
- (void)cleanupWithHomeDirectoryLocation:(id)a0;
- (void)fetchMainConfigFileWithOverrrides:(id)a0 withReply:(id /* block */)a1;
- (void)fetchTypeBlackListWithReply:(id /* block */)a0;
- (id)initWithErrorHandler:(id /* block */)a0;
- (BOOL)submitDRETelemetryAndDiagnostics:(BOOL)a0;
- (BOOL)submitWithOptions:(id)a0;
- (void)submitWithOptions:(id)a0 resultsCallback:(id /* block */)a1;
- (void)updateConfigFile;

@end
