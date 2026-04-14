@class IMScheduledSectionDateChatItem;

@interface IMScheduledSectionLabelChatItem : IMTranscriptChatItem

@property (retain, nonatomic) IMScheduledSectionDateChatItem *dateChatItem;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAssociatedDateChatItem:(id)a0;
- (BOOL)isEqualToScheduledLabelChatItem:(id)a0;

@end
