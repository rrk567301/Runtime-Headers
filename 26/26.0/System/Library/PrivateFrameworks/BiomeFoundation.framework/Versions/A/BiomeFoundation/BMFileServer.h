@class NSString, BMFileManager;
@protocol _BMRootLibrary;

@interface BMFileServer : NSObject <BMFileServer> {
    NSString *_directory;
    BMFileManager *_fileManager;
    unsigned long long _domain;
    id<_BMRootLibrary> _library;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)entitledToAccessClientCompute:(id)a0 error:(id *)a1;
- (void)removeFileAtPath:(id)a0 reply:(id /* block */)a1;
- (id)initWithDirectory:(id)a0;
- (void)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 protection:(int)a2 flags:(int)a3 reply:(id /* block */)a4;
- (BOOL)allowedToAccessStream:(id)a0 withMode:(int)a1 error:(id *)a2;
- (BOOL)entitledToAccessSharedSyncWithError:(id *)a0;
- (void)fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 reply:(id /* block */)a3;
- (id)currentUseCase;
- (void)temporaryFileHandleWithProtection:(int)a0 reply:(id /* block */)a1;
- (void)removeDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void)createDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (BOOL)isBiomeSyncDaemon;
- (BOOL)isPrimaryDaemon;
- (id)initWithDirectory:(id)a0 library:(id)a1;
- (void).cxx_destruct;

@end
