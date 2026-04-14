@class NSXPCConnection;

@interface SystemHealthManager : NSObject {
    NSXPCConnection *_connectionToService;
    int deviceClass;
}

- (BOOL)isSupportedIPad;
- (void).cxx_destruct;
- (id)init;
- (void)postComponentStatusEventFor:(unsigned long long)a0 status:(unsigned long long)a1 withReply:(id /* block */)a2;
- (BOOL)shouldFilterComponent:(unsigned long long)a0;

@end
