@interface FaceTimeMessageStore.VideoMessagingServiceDelegate : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ videoMessagingDataSource;
}

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
