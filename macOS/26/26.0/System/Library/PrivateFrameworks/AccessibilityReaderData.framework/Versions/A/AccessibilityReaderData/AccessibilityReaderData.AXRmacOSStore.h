@interface AccessibilityReaderData.AXRmacOSStore : NSObject <AXKScreenDescriberObjCBridgeDelegate> {
    void /* unknown type, empty encoding */ _screenDescriber;
    void /* unknown type, empty encoding */ _isFetching;
    void /* unknown type, empty encoding */ _initialFetchResult;
    void /* unknown type, empty encoding */ _initialFetchSource;
    void /* unknown type, empty encoding */ _fetchTimeoutWorkItem;
    void /* unknown type, empty encoding */ fetchTimeoutDuration;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (id)init;
- (void).cxx_destruct;
- (void)screenDescriberContentNotFound;
- (void)screenDescriberObjCDidFinishDescribingApplication:(id)a0;

@end
