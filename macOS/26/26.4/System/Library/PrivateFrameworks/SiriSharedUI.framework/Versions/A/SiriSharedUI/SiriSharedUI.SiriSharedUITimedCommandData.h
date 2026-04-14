@interface SiriSharedUI.SiriSharedUITimedCommandData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ command;
    void /* unknown type, empty encoding */ timestamp;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
