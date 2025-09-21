@class IMBalloonPluginDataSource, IMPluginPayload, NSString;

@interface IMTranscriptPluginChatItem : IMMessagePartChatItem <IMPluginChatItemProtocol>

@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource;
@property (retain, nonatomic) IMPluginPayload *initialPayload;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) char hasSetIsLastChatItemOfPluginType;
@property (readonly, nonatomic) char isDataSourceInitialized;
@property (readonly, nonatomic) NSString *pluginSessionGUID;
@property (readonly, nonatomic) unsigned long long playbackType;
@property (nonatomic, setter=setLastChatItemOfPluginType:) char isLastChatItemOfPluginType;
@property (readonly, nonatomic) char parentChatHasKnownParticipants;
@property (readonly, nonatomic) char isPlayed;
@property (readonly, nonatomic) char isSaved;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, nonatomic) char isFromMe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned char)contentType;
- (id)messageSummaryInfo;
- (id)_initWithItem:(id)a0 initialPayload:(id)a1 index:(long long)a2 messagePartRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 parentChatHasKnownParticipants:(char)a4;
- (id)replyContextPreviewChatItemForReply:(id)a0 chatContext:(id)a1;
- (char)supportsSuggestedActionsMenu;
- (char)wantsAutoPlayback;

@end
