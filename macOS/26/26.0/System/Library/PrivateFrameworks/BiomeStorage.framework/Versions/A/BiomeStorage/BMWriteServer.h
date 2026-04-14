@class NSString;

@interface BMWriteServer : NSObject <BMXPCListenerDelegate> {
    NSString *_client;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
