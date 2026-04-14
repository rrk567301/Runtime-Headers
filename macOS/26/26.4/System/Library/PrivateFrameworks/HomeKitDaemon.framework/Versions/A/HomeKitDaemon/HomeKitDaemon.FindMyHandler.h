@class HMDFMF;

@interface HomeKitDaemon.FindMyHandler : SwiftNativeNSObject <HMDFMFHandlerProtocol> {
    void /* unknown type, empty encoding */ isStarted;
    void /* unknown type, empty encoding */ featuresDataSource;
    void /* unknown type, empty encoding */ findMySession;
    void /* unknown type, empty encoding */ fmfStatus;
    void /* unknown type, empty encoding */ fmfDevice;
    void /* unknown type, empty encoding */ fakeCurrentDeviceAsDesignatedFMDevice;
}

@property (nonatomic, readonly) BOOL isThisDesignatedFMFDevice;

- (id)init;
- (void)fakeFMFStatus:(BOOL)a0 withCompletion:(void (^)(HMDFMF *))a1;
- (void)queryFMFStatusWithCompletion:(void (^)(HMDFMF *))a0;

@end
