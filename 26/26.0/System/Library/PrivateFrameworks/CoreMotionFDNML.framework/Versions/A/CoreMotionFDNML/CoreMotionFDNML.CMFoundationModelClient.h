@class _TtC15CoreMotionFDNML24CMFoundationModelRequest, NSString, _TtC15CoreMotionFDNML25CMFoundationModelResponse;

@interface CoreMotionFDNML.CMFoundationModelClient : NSObject {
    void /* unknown type, empty encoding */ maybeSession;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSupportedAssetBundleIdentifiers:(id)a0 useCaseID:(id)a1 onBehalfOfPID:(long long)a2 loggingIdentifier:(id)a3;
- (BOOL)requestPrewarmAndReturnError:(id *)a0;
- (void)sendAsyncWithRequest:(_TtC15CoreMotionFDNML24CMFoundationModelRequest *)a0 loggingID:(NSString *)a1 completionHandler:(void (^)(_TtC15CoreMotionFDNML25CMFoundationModelResponse *))a2;

@end
