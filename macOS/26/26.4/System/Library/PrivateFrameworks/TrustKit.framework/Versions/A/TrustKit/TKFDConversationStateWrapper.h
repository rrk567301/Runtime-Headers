@interface TKFDConversationStateWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ alreadyInSpamFrom;
    void /* unknown type, empty encoding */ revokedFromSpamBy;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
