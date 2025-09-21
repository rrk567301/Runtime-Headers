@class NSString;

@interface BMWriteServer : NSObject <BMXPCListenerDelegate> {
    NSString *_client;
}

- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
