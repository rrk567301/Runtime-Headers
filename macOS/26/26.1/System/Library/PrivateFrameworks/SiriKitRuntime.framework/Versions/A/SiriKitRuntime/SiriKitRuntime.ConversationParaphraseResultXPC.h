@interface SiriKitRuntime.ConversationParaphraseResultXPC : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ paraphrase;
    void /* unknown type, empty encoding */ errorMsg;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
