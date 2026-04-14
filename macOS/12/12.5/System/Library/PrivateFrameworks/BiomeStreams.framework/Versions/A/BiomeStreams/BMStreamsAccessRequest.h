@class NSString, NSXPCConnection;

@interface BMStreamsAccessRequest : NSObject <BMStreamsAccessRequestProtocol> {
    struct { unsigned int val[8]; } _token;
    NSString *_identifier;
    NSXPCConnection *_weakConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)requestAccess:(unsigned long long)a0 streamIdentifier:(id)a1 streamType:(unsigned long long)a2 reply:(id /* block */)a3;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0 identifier:(id)a1 connection:(id)a2;
- (BOOL)_hasDirectoryAtPath:(id)a0;
- (BOOL)_createDirectoryAtPath:(id)a0;
- (void)_macOS_excludeDirectoryFromBackup:(id)a0;
- (void)_processRequestForDSLAccessWithReply:(id /* block */)a0;
- (void)_processRequestForAccess:(id)a0 reply:(id /* block */)a1;
- (BOOL)entitledToAccess:(id)a0;
- (void)_configureDirectoryForStreamType:(unsigned long long)a0;

@end
