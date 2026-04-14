@class NSString, IMHandle;

@interface IMSenderChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *handle;
@property (readonly, nonatomic) long long transcriptSharingMessageType;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isMergedBusinessThread) BOOL mergedBusinessThread;
@property (readonly, nonatomic, getter=isSpam) BOOL spam;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0 handle:(id)a1 displayName:(id)a2 mergedBusinessThread:(BOOL)a3 isSpam:(BOOL)a4;
- (id)_initWithItem:(id)a0 handle:(id)a1 displayName:(id)a2 transcriptSharingMessageType:(long long)a3 isSpam:(BOOL)a4;
- (id)_initWithItem:(id)a0 handle:(id)a1 isSpam:(BOOL)a2;

@end
