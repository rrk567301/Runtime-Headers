@class NSXPCConnection;

@interface SystemHealthManager : NSObject {
    NSXPCConnection *_connectionToService;
    int deviceClass;
}

- (BOOL)shouldFilterComponent:(unsigned long long)a0;
- (id)init;
- (BOOL)isSupportedIPad;
- (void).cxx_destruct;
- (void)postComponentStatusEventFor:(unsigned long long)a0 status:(unsigned long long)a1 withReply:(id /* block */)a2;

@end
