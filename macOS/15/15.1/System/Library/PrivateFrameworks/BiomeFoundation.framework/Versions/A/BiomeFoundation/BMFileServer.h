@class NSString, BMFileManager;

@interface BMFileServer : NSObject <BMFileServer> {
    NSString *_directory;
    BMFileManager *_fileManager;
    unsigned long long _domain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDirectory:(id)a0;
- (void)createDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (id)currentUseCase;
- (BOOL)entitledToAccessClientCompute:(id)a0 error:(id *)a1;
- (BOOL)entitledToAccessSharedSyncWithError:(id *)a0;
- (BOOL)entitledToAccessStream:(id)a0 withMode:(int)a1 error:(id *)a2;
- (void)fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 reply:(id /* block */)a3;
- (BOOL)isBiomeSyncDaemon;
- (void)removeDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void)removeFileAtPath:(id)a0 reply:(id /* block */)a1;
- (void)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 protection:(int)a2 reply:(id /* block */)a3;
- (void)temporaryFileHandleWithProtection:(int)a0 reply:(id /* block */)a1;

@end
