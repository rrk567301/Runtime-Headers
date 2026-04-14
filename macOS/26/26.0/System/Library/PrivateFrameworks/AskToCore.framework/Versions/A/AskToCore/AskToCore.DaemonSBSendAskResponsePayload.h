@interface AskToCore.DaemonSBSendAskResponsePayload : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
