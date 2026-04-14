@interface GTReplayRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requestID;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initNoRequestID;
- (void)decodeXPCOnlyObjects:(id)a0;
- (void)encodeXPCOnlyObjects:(id)a0;

@end
