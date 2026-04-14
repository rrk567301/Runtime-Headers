@interface AskToCore.DaemonSBSendAskResponsePayload : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
