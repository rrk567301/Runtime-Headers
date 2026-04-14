@interface CloudKitDaemon.CKDSessionValidator : NSObject {
    void /* unknown type, empty encoding */ sessionConfiguration;
    void /* unknown type, empty encoding */ sessionAcquiredInfo;
    void /* unknown type, empty encoding */ testDeviceReferenceProtocol;
    void /* unknown type, empty encoding */ entitlements;
    void /* unknown type, empty encoding */ deviceID;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)validateAndReturnError:(id *)a0;

@end
