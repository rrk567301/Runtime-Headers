@interface VCDatagramChannelMultiLink : VCObject <VCDatagramChannel> {
    id /* block */ _eventHandler;
    id /* block */ _readHandler;
    BOOL _isStarted;
    unsigned int _token;
    struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } _connections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

- (void)setEventHandler:(id /* block */)a0;
- (int)addConnection:(id)a0 error:(id *)a1;
- (int)start;
- (void)dealloc;
- (void)invalidate;
- (void)destroy;
- (void)setReadHandler:(id /* block */)a0;
- (void)setWriteCompletionHandler:(id /* block */)a0;
- (void)writeDatagram:(const void *)a0 datagramSize:(unsigned int)a1 datagramInfo:(id)a2 options:(void **)a3 completionHandler:(id /* block */)a4;
- (void)writeDatagrams:(const void **)a0 datagramsSize:(unsigned int *)a1 datagramsInfo:(id *)a2 datagramsCount:(int)a3 options:(void ***)a4 completionHandler:(id /* block */)a5;
- (unsigned long long)connectionsCount;
- (unsigned long long)connectionsCountProtected;
- (id)initWithNWConnections:(id)a0 token:(unsigned int)a1 options:(id)a2 error:(id *)a3;
- (struct { struct _VCSingleLinkedListEntry { struct _VCSingleLinkedListEntry *x0; } x0; id x1; } *)newListItemWithNWConnection:(id)a0;
- (int)removeConnection:(id)a0 error:(id *)a1;
- (int)removeConnectionProtected:(id)a0 error:(id *)a1;
- (BOOL)scheduleReceiveForConnection:(id)a0;

@end
