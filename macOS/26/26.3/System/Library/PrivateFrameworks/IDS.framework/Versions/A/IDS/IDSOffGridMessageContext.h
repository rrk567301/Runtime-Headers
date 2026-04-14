@class NSString;

@interface IDSOffGridMessageContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *senderMergeID;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long transportType;
@property (nonatomic) long long serviceType;
@property (nonatomic) long long underlyingCommand;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIDSMessageContext:(id)a0;

@end
