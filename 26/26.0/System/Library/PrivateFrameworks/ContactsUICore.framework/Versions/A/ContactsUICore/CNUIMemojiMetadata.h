@class NSString, AVTAvatar, AVTStickerConfiguration, NSData;
@protocol AVTAvatarRecord;

@interface CNUIMemojiMetadata : NSObject <CNUIMemojiMetadata>

@property (retain, nonatomic) NSString *accessibilityDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (readonly, nonatomic) AVTStickerConfiguration *poseConfiguration;
@property (readonly, nonatomic) AVTAvatar *avatar;
@property (readonly, nonatomic) NSData *avatarRecordData;
@property (readonly, nonatomic) NSData *poseConfigurationData;
@property (readonly, nonatomic) BOOL poseHasBody;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)variantsOfMemojiMetadata:(id)a0 count:(unsigned long long)a1;
+ (id)metadataWithAvatarRecordData:(id)a0 poseConfigurationData:(id)a1;
+ (id)suggestedAnimojiMetadataWithCount:(unsigned long long)a0;
+ (id)suggestedMemojiMetadataWithCount:(unsigned long long)a0;

@end
