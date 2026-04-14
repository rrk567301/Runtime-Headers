@interface AskToCore.SendRequestPayload : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ payload;
    void /* unknown type, empty encoding */ recipientGroupInfo;
    void /* unknown type, empty encoding */ requiredCapabilities;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
