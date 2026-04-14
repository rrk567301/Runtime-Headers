@class NSString;

@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem

@property (readonly, copy, nonatomic) NSString *transferGUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)description;
- (id)_initWithItem:(id)a0 sender:(id)a1 transferGUID:(id)a2;
- (void)_refreshGeometryDescriptorFromStickerUserInfo;
- (id)commSafetyMessageGUID;
- (id)commSafetyTransferGUID;
- (unsigned long long)stickerPositionVersion;
- (BOOL)supportsCommunicationSafety;

@end
