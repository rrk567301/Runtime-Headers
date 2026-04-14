@class NSString;

@interface MAPushChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long populationType;
@property (readonly, nonatomic) NSString *base64ChannelId;

- (id)populationTypeString;
- (id)channelIDForPopulationType;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)humanReadableChannelName;
- (id)initWithPopulationType:(long long)a0;

@end
