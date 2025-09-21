@interface SiriSharedUI.SiriSharedUIReplayData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ utterance;
    void /* unknown type, empty encoding */ speechRecognized;
    void /* unknown type, empty encoding */ addViews;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
