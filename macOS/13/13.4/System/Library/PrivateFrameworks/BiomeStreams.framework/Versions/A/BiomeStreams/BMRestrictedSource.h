@class BMStoreSource;

@interface BMRestrictedSource : BMSource {
    BMStoreSource *_storeSource;
}

- (void).cxx_destruct;
- (void)sendEvent:(id)a0;
- (void)sendEvent:(id)a0 timestamp:(double)a1;
- (id)initWithStoreSource:(id)a0;

@end
