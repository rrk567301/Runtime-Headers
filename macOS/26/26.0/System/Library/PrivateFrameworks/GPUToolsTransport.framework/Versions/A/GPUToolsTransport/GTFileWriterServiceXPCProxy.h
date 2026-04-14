@class NSSet;
@protocol GTXPCConnection;

@interface GTFileWriterServiceXPCProxy : NSObject <GTFileWriterService> {
    id<GTXPCConnection> _connection;
    NSSet *_ignoreMethods;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)initiateTransfer:(id)a0 basePath:(id)a1 fromDevice:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)beginTransferSessionWithFileEntries:(id)a0 basePath:(id)a1 toDevice:(id)a2 options:(id)a3 sessionID:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)startTransfer:(id)a0 basePath:(id)a1 fromDevice:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)startTransfer:(id)a0 basePath:(id)a1 fromDevice:(id)a2 toDirectory:(id)a3 options:(id)a4 completionHandler:(id /* block */)a5;
- (void)writeFileData:(id)a0 sessionID:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
