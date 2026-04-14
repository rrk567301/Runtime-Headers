@class NSSet, NSObject;
@protocol OS_dispatch_semaphore, GTXPCConnection;

@interface GTFileWriterServiceXPCProxy : NSObject <GTFileWriterService> {
    id<GTXPCConnection> _connection;
    NSSet *_ignoreMethods;
    NSObject<OS_dispatch_semaphore> *_sema;
}

- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)finishSession:(unsigned long long)a0;
- (void)abortSession:(unsigned long long)a0;
- (id)initWithConnection:(id)a0 remoteProperties:(id)a1;
- (void)initiateTransfer:(id)a0 basePath:(id)a1 device:(id)a2 config:(struct { unsigned int x0; unsigned int x1; unsigned int x2; })a3 completionHandler:(id /* block */)a4;
- (void)beginTransferSessionWithFileEntries:(id)a0 basePath:(id)a1 device:(id)a2 config:(struct { unsigned int x0; unsigned int x1; unsigned int x2; })a3 sessionID:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)writeFileChunks:(id)a0 withData:(id)a1 session:(unsigned long long)a2 completionHandler:(id /* block */)a3;

@end
