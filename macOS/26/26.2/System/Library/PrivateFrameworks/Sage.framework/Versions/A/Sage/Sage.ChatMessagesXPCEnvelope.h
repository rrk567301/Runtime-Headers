@class NSData;

@interface Sage.ChatMessagesXPCEnvelope : NSObject <NSSecureCoding> {
    void /* function */ _messages;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_messages;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
