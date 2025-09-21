@class NSUUID, MEMessage;

@interface MEComposeContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) MEMessage *originalMessage;
@property (retain, nonatomic) NSUUID *contextID;
@property (nonatomic) long long action;
@property (nonatomic) char isEncrypted;
@property (nonatomic) char isSigned;
@property (nonatomic) char shouldEncrypt;
@property (nonatomic) char shouldSign;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(long long)a0 originalMessage:(id)a1 shouldSign:(char)a2 isSigned:(char)a3 shouldEncrypt:(char)a4 isEncrypted:(char)a5;

@end
