@class NSString;

@interface MAPushChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long populationType;
@property (readonly, nonatomic) NSString *base64ChannelId;

- (id)channelIDForPopulationType;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)populationTypeString;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)humanReadableChannelName;
- (id)description;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (id)initWithPopulationType:(long long)a0;

@end
