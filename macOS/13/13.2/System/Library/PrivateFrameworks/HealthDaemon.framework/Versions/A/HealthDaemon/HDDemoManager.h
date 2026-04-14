@class _HDDataFaker;

@interface HDDemoManager : NSObject {
    _HDDataFaker *_faker;
}

- (void).cxx_destruct;
- (void)startFakingDataForActivityType:(long long)a0 locationType:(long long)a1 speed:(id)a2 objectHandler:(id /* block */)a3;
- (void)stopFakingData;
- (void)generateFakeDataForActivityType:(long long)a0 minutes:(double)a1 objectHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)isProvidingData;

@end
