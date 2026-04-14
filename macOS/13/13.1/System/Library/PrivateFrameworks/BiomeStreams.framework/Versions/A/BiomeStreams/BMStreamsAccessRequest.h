@class NSXPCListener, BMFileServer, BMAccessControlPolicy, NSString;

@interface BMStreamsAccessRequest : NSObject <BMStreamsAccessRequestProtocol> {
    unsigned long long _domain;
    BMFileServer *_fileServer;
    NSString *_applicationIdentifier;
}

@property (retain, nonatomic) BMAccessControlPolicy *policy;
@property (weak, nonatomic) NSXPCListener *listener;

- (void).cxx_destruct;
- (id)connection;
- (id)applicationIdentifier;
- (void)requestBiomeEndpoint:(BOOL)a0 reply:(id /* block */)a1;
- (id)initWithDomain:(unsigned long long)a0;
- (void)fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 reply:(id /* block */)a3;
- (void)sharedMemoryForFileAtPath:(id)a0 flags:(int)a1 reply:(id /* block */)a2;
- (void)createDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void)removeFileAtPath:(id)a0 reply:(id /* block */)a1;
- (void)removeDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void)temporaryFileHandleWithProtection:(int)a0 reply:(id /* block */)a1;
- (void)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 reply:(id /* block */)a2;
- (void)requestAccess:(unsigned long long)a0 streamIdentifier:(id)a1 streamType:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)requestAccessToFlexibleStorageWithReply:(id /* block */)a0;
- (void)_macOS_excludeDirectoryFromBackup:(id)a0;
- (void)_configureDirectoryForStreamType:(unsigned long long)a0;
- (BOOL)_createDirectoryAtPath:(id)a0;
- (BOOL)_hasDirectoryAtPath:(id)a0;
- (void)_processRequestForAccess:(id)a0 reply:(id /* block */)a1;

@end
