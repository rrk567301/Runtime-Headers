@class IMScheduledSectionDateChatItem;

@interface IMScheduledSectionLabelChatItem : IMTranscriptChatItem

@property (retain, nonatomic) IMScheduledSectionDateChatItem *dateChatItem;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssociatedDateChatItem:(id)a0;
- (BOOL)isEqualToScheduledLabelChatItem:(id)a0;

@end
