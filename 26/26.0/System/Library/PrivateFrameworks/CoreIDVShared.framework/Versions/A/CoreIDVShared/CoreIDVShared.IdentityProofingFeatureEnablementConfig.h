@interface CoreIDVShared.IdentityProofingFeatureEnablementConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ manualReviewEnabledLivenessConsentFlowItem;
    void /* unknown type, empty encoding */ manualReviewEnabledFedStatsConsentFlowItem;
    void /* unknown type, empty encoding */ manualReviewDisabledFedStatsConsentFlowItem;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
