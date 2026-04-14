@class NSString;

@interface MAPushChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long populationType;
@property (readonly, nonatomic) NSString *base64ChannelId;

- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPopulationType:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)humanReadableChannelName;
- (id)populationTypeString;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)channelIDForPopulationType;

@end
