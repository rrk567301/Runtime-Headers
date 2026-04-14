@interface AMPLMediaAppClient : AMPLClient <AMPLClientProtocol>

- (void)fetchLibraryChangesFromRevision:(unsigned int)a0 withInitialLoad:(BOOL)a1 withReply:(id /* block */)a2;
- (void)sendDBChangesToLibrary:(id)a0 fromRevision:(unsigned int)a1 withReply:(id /* block */)a2;
- (void)cloudClientCommand:(unsigned int)a0 withData:(unsigned long long)a1 forClient:(unsigned int)a2 withReply:(id /* block */)a3;
- (void)synchronousCloudClientCommand:(unsigned int)a0 withData:(unsigned long long)a1 forClient:(unsigned int)a2 withReply:(id /* block */)a3;
- (void)synchronousRefreshSubscribedPlaylist:(unsigned long long)a0 withCloudID:(unsigned long long)a1 withReason:(unsigned char)a2 withReply:(id /* block */)a3;
- (void)synchronousAddToCloudMusicLibrary:(id)a0 withReply:(id /* block */)a1;
- (BOOL)handleReconnectionToLibrary:(id)a0;
- (BOOL)handleGetServerProtocolVersion:(unsigned int)a0 withConnection:(id)a1 protocolVersion:(id *)a2;
- (BOOL)handleRegisterLibraryClient:(unsigned int)a0 withConnection:(id)a1 error:(id *)a2;
- (void)handleOpenMediaDomains:(id)a0 withConnection:(id)a1 withReply:(id /* block */)a2;
- (id)initWithClientInfo:(id)a0 withClientID:(unsigned int)a1 withMediaDomains:(unsigned long long)a2 withEventsDelegate:(id)a3 protocolVersion:(id *)a4 error:(id *)a5;
- (void)getDomainInfo:(id)a0 withReply:(id /* block */)a1;
- (void)openMediaDomains:(id)a0 withReply:(id /* block */)a1;
- (void)synchronousFetchLibraryChangesFromRevision:(unsigned int)a0 withInitialLoad:(BOOL)a1 withReply:(id /* block */)a2;

@end
