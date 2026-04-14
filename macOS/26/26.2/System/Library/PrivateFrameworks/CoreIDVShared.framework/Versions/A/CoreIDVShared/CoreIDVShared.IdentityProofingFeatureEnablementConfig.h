@interface CoreIDVShared.IdentityProofingFeatureEnablementConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ manualReviewEnabledLivenessConsentFlowItem;
    void /* unknown type, empty encoding */ manualReviewEnabledFedStatsConsentFlowItem;
    void /* unknown type, empty encoding */ manualReviewDisabledFedStatsConsentFlowItem;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
