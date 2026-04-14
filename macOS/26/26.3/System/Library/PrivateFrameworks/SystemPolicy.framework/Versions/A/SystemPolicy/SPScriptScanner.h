@class NSXPCConnection, NSXPCInterface;

@interface SPScriptScanner : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getScriptScanEvaluationFor:(id)a0 scriptData:(id)a1 scanResult:(id)a2;

@end
