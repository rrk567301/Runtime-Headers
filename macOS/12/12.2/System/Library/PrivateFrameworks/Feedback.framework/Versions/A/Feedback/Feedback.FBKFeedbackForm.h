@interface Feedback.FBKFeedbackForm : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ answers;
    void /* unknown type, empty encoding */ authenticationMethod;
    void /* unknown type, empty encoding */ attachments;
    void /* unknown type, empty encoding */ sandboxExtensionAttachments;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
