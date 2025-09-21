@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem

@property (nonatomic) unsigned long long numberOfMomentShareSavedAssets;
@property (nonatomic) unsigned long long numberOfMomentSharePhotos;
@property (nonatomic) unsigned long long numberOfMomentShareVideos;
@property (readonly, copy, nonatomic) NSString *transferGUID;
@property (readonly, nonatomic) char parentChatIsSpam;
@property (readonly, nonatomic) char wantsAttachmentContiguous;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned char)contentType;
- (id)messageSummaryInfo;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUID:(id)a4 chatContext:(id)a5;
- (id)_initWithItem:(id)a0 text:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 transferGUID:(id)a4 chatContext:(id)a5 visibleAssociatedMessageChatItems:(id)a6;
- (char)_wantsAttachmentContiguousForType:(id)a0;
- (id)commSafetyMessageGUID;
- (id)commSafetyTransferGUID;
- (char)isAttachmentContiguousWithChatItem:(id)a0;
- (id)layoutGroupIdentifier;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;
- (char)supportsCommunicationSafety;
- (char)supportsSuggestedActionsMenu;
- (long long)syndicationBehavior;

@end
