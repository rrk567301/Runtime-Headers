@interface AskToCore.DaemonSBSendAskPayload : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ question;
    void /* unknown type, empty encoding */ clientPayload;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
