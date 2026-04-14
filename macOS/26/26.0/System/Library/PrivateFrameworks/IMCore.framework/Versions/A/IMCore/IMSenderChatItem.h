@class NSString, IMHandle;

@interface IMSenderChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) IMHandle *handle;
@property (readonly, nonatomic) long long transcriptSharingMessageType;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isMergedBusinessThread) BOOL mergedBusinessThread;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithItem:(id)a0 handle:(id)a1;
- (id)_initWithItem:(id)a0 handle:(id)a1 displayName:(id)a2 mergedBusinessThread:(BOOL)a3;
- (id)_initWithItem:(id)a0 handle:(id)a1 displayName:(id)a2 transcriptSharingMessageType:(long long)a3;

@end
