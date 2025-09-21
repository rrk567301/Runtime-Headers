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
    void /* unknown type, empty encoding */ minimumNFCReadTimeThreshold;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
