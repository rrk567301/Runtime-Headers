@interface HomeKitCore.XPCPublisher : NSObject <HomeKitCore.XPCModelPublisherInterface> {
    void /* unknown type, empty encoding */ cancelationHandler;
}

- (void)dealloc;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;

@end
