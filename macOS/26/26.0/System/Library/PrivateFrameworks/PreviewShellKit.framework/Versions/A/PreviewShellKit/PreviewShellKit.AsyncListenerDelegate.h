@interface PreviewShellKit.AsyncListenerDelegate : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ serviceConnectionHandler;
}

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
