@class NSString;

@interface SiriInformationSearch.PommesResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ experiences;
    void /* unknown type, empty encoding */ clientResults;
    void /* unknown type, empty encoding */ conversationContext;
    void /* unknown type, empty encoding */ metadataDomainName;
    void /* unknown type, empty encoding */ renderedTexts;
    void /* unknown type, empty encoding */ pegasusDomainFlowStepLog;
    void /* unknown type, empty encoding */ pegasusDomainUserSensitiveTier1Log;
    void /* unknown type, empty encoding */ listenAfterSpeaking;
    void /* unknown type, empty encoding */ requestId;
    void /* unknown type, empty encoding */ resultCandidateId;
    void /* unknown type, empty encoding */ isHandledByPreflight;
    void /* unknown type, empty encoding */ preflightClientHandlerIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
