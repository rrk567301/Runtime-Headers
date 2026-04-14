@interface AccessibilityReaderData.AXRmacOSStore : NSObject <AXKScreenDescriberObjCBridgeDelegate> {
    void /* unknown type, empty encoding */ _screenDescriber;
    void /* unknown type, empty encoding */ _isFetching;
    void /* unknown type, empty encoding */ _targetWindow;
    void /* unknown type, empty encoding */ _initialFetchResult;
    void /* unknown type, empty encoding */ _initialFetchSource;
    void /* unknown type, empty encoding */ _signpostState;
    void /* unknown type, empty encoding */ _fetchTimeoutWorkItem;
    void /* unknown type, empty encoding */ fetchTimeoutDuration;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void).cxx_destruct;
- (id)init;
- (void)screenDescriberContentNotFound;
- (void)screenDescriberObjCDidFinishDescribingApplication:(id)a0;

@end
