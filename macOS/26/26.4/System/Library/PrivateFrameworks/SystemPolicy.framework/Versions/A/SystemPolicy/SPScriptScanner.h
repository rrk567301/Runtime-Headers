@class NSXPCConnection, NSXPCInterface;

@interface SPScriptScanner : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)getScriptScanEvaluationFor:(id)a0 scriptData:(id)a1 scanResult:(id)a2;

@end
