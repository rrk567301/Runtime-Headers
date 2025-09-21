@class NSData;

@interface Sage.ChatMessagesXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _messages;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_messages;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
