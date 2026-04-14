@interface SiriSharedUI.SiriSharedUIReplayData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ utterance;
    void /* unknown type, empty encoding */ addViewsData;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
