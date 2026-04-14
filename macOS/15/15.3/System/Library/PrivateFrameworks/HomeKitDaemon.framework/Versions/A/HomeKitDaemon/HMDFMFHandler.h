@class HMDFMF;

@interface HMDFMFHandler : SwiftNativeNSObject <HMDFMFHandlerProtocol> {
    void /* unknown type, empty encoding */ isStarted;
    void /* unknown type, empty encoding */ findMySession;
    void /* unknown type, empty encoding */ fmfStatus;
}

@property (class, nonatomic, readonly) HMDFMFHandler *sharedHandler;

- (id)init;
- (void)startWithCompletionHandler:(void (^)(void))a0;
- (BOOL)isThisDesignatedFMFDevice;
- (void)queryFMFStatusWithCompletion:(void (^)(HMDFMF *))a0;

@end
