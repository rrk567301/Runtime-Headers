@class NSXPCConnection, NSXPCInterface;

@interface SPScriptScanner : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)getScriptScanEvaluationFor:(id)a0 scriptData:(id)a1 scanResult:(id)a2;

@end
