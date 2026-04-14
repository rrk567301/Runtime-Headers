@interface SiriInformationSearch.PommesResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ experiences;
    void /* unknown type, empty encoding */ conversationContext;
    void /* unknown type, empty encoding */ metadataDomainName;
    void /* unknown type, empty encoding */ renderedTexts;
    void /* unknown type, empty encoding */ pegasusDomainFlowStepLog;
    void /* unknown type, empty encoding */ pegasusDomainUserSensitiveTier1Log;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
