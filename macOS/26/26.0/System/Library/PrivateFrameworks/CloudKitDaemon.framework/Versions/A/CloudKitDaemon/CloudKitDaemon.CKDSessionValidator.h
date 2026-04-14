@interface CloudKitDaemon.CKDSessionValidator : NSObject {
    void /* unknown type, empty encoding */ sessionConfiguration;
    void /* unknown type, empty encoding */ sessionAcquiredInfo;
    void /* unknown type, empty encoding */ testDeviceReferenceProtocol;
    void /* unknown type, empty encoding */ entitlements;
    void /* unknown type, empty encoding */ deviceID;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)validateAndReturnError:(id *)a0;

@end
