@interface AskToCore.SendRequestPayload : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ payload;
    void /* unknown type, empty encoding */ recipientGroupInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
