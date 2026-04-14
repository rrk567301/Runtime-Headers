@class NSString;

@interface TRIPushChannelId : NSObject {
    NSString *_rawIdentifier;
    NSString *_base64ChannelId;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int populationType;
@property (readonly, nonatomic) unsigned long long type;

+ (BOOL)_writeToByte:(char *)a0 fromHexByteString:(id)a1;
+ (id)_base64ChannelIdForIdentifier:(id)a0 populationType:(int)a1;

- (BOOL)isEqualToPushChannelId:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithRolloutDeployment:(id)a0;
- (unsigned long long)hash;
- (id)initWithExperimentId:(id)a0;
- (id)initWithPushChannelId:(id)a0;

@end
