@class HMDCameraStreamSessionInfo, NSString;

@interface HMDCameraParameterSelection : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDCameraStreamSessionInfo *streamSessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_selectedCryptoSuiteFromCameraCryptoSuites:(id)a0;
+ (id)selectedParametersFromPreferredParameters:(id)a0 deviceSupportedParameters:(id)a1 cameraSupportedParameters:(id)a2 overriddenParameters:(id)a3 parameterDescription:(id)a4;
+ (id)selectedSRTPParametersFromCryptoSuites:(id)a0;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithSessionInfo:(id)a0;

@end
