@class IMScheduledSectionDateChatItem;

@interface IMScheduledSectionLabelChatItem : IMTranscriptChatItem

@property (retain, nonatomic) IMScheduledSectionDateChatItem *dateChatItem;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAssociatedDateChatItem:(id)a0;
- (BOOL)isEqualToScheduledLabelChatItem:(id)a0;

@end
