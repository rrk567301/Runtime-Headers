@interface TKFDImageSpamDecisioningInput : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ origin;
    void /* unknown type, empty encoding */ sender;
    void /* unknown type, empty encoding */ fileURL;
    void /* unknown type, empty encoding */ receiverISOCountryCode;
    void /* unknown type, empty encoding */ inferenceType;
    void /* unknown type, empty encoding */ conversationState;
    void /* unknown type, empty encoding */ trustIndicator;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
