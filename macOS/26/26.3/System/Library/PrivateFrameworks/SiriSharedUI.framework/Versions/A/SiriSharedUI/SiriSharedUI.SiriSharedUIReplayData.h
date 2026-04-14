@interface SiriSharedUI.SiriSharedUIReplayData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ utterance;
    void /* unknown type, empty encoding */ speechRecognized;
    void /* unknown type, empty encoding */ addViews;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
