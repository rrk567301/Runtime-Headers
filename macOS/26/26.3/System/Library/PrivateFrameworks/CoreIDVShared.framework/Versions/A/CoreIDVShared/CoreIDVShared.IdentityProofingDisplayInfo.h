@interface CoreIDVShared.IdentityProofingDisplayInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ proofingUI;
    void /* unknown type, empty encoding */ docScan;
    void /* unknown type, empty encoding */ attributeConfig;
    void /* unknown type, empty encoding */ learnMoreURL;
    void /* unknown type, empty encoding */ waitingForWiFiAlertDataThresholdInBytes;
    void /* unknown type, empty encoding */ lowDataModeAlertDataThresholdInBytes;
    void /* unknown type, empty encoding */ documentType;
    void /* unknown type, empty encoding */ featureEnablementConfig;
    void /* unknown type, empty encoding */ supportedRegions;
    void /* unknown type, empty encoding */ livenessStepUpConfig;
    void /* unknown type, empty encoding */ livenessStepUpIQSettings;
    void /* unknown type, empty encoding */ shouldPreFetchLivenessConfig;
    void /* unknown type, empty encoding */ minimumAge;
    void /* unknown type, empty encoding */ nfcConfig;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
