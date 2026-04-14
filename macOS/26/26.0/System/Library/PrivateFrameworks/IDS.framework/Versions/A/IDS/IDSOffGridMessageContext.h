@class NSString;

@interface IDSOffGridMessageContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *senderMergeID;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long transportType;
@property (nonatomic) long long serviceType;
@property (nonatomic) long long underlyingCommand;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIDSMessageContext:(id)a0;

@end
