@class NSString;

@interface MAPushChannel : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long populationType;
@property (readonly, nonatomic) NSString *base64ChannelId;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (id)channelIDForPopulationType;
- (id)humanReadableChannelName;
- (id)initWithPopulationType:(long long)a0;

@end
