@interface MNETAUpdateRequester : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _requestTimer;
    void /* unknown type, empty encoding */ _pendingRequest;
    void /* unknown type, empty encoding */ _tripOrigin;
    void /* unknown type, empty encoding */ _requestingAppIdentifier;
    void /* unknown type, empty encoding */ _auditToken;
    void /* unknown type, empty encoding */ _etaRequestInterval;
    void /* unknown type, empty encoding */ _initialRequestDelay;
    void /* unknown type, empty encoding */ _opportunisticRequestTimeWindow;
    void /* unknown type, empty encoding */ _maxAlternateRoutesCount;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
