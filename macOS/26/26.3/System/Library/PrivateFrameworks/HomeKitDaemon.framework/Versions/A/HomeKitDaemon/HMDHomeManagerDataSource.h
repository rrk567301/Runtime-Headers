@interface HMDHomeManagerDataSource : NSObject <HMDHomeManagerDataSource> {
    void /* function */ backingStoreFactory;
    void /* function */ wifiManagerFactory;
    void /* function */ _threadClientFactory;
}

@property (nonatomic, readonly) id /* block */ backingStoreFactory;
@property (nonatomic, readonly) id /* block */ wifiManagerFactory;
@property (nonatomic, readonly) id /* block */ _threadClientFactory;
@property (nonatomic, readonly) id /* block */ threadClientFactory;

- (id)init;
- (void).cxx_destruct;
- (id)createBackingStoreForHomeManager:(id)a0 error:(id *)a1;
- (id)createWiFiManager;
- (id)initWithBackingStoreFactory:(id /* block */)a0 wifiManagerFactory:(id /* block */)a1 threadClientFactory:(id /* block */)a2;

@end
