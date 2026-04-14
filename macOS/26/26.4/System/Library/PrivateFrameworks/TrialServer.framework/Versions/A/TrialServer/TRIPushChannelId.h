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

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)description;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (id)initWithRolloutDeployment:(id)a0;
- (id)initWithExperimentId:(id)a0;
- (id)initWithPushChannelId:(id)a0;

@end
