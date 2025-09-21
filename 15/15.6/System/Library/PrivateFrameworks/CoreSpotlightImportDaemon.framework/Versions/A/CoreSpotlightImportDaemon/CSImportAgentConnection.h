@interface CSImportAgentConnection : CSXPCConnection

- (char)handleCommand:(const char *)a0 info:(id)a1 connection:(id)a2;
- (char)allowClientConnection:(id)a0;
- (char)handleAllExtensions:(id)a0 forConnection:(id)a1;
- (char)handleImport:(id)a0 forConnection:(id)a1;

@end
