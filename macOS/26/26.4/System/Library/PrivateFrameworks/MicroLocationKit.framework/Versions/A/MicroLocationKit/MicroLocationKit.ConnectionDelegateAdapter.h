@interface MicroLocationKit.ConnectionDelegateAdapter : NSObject <ULConnectionDelegate> {
    void /* unknown type, empty encoding */ state;
}

- (void).cxx_destruct;
- (id)init;
- (void)connectionDidUpdateMap:(id)a0;
- (void)connectionDidUpdatePredictionContext:(id)a0;

@end
