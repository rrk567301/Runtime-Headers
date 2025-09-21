@class NSUUID, NSArray;

@interface IMMutableChatContext : IMChatContext

@property (nonatomic) long long serviceType;
@property (nonatomic) long long filterCategory;
@property (nonatomic, getter=isSpam) char spam;
@property (nonatomic, getter=areSendersUnknown) char sendersUnknown;
@property (nonatomic, getter=hasResponded) char responded;
@property (retain, nonatomic) NSUUID *activeTelephonyConversationUUID;
@property (retain, nonatomic) NSArray *showingEditHistoryForChatItemGUIDs;
@property (nonatomic, getter=isChatBot) char isChatBot;

+ (id)chatContextForPinnedChat:(id)a0;

- (void)setServiceType:(long long)a0;
- (void)setActiveTelephonyConversationUUID:(id)a0;
- (void)setFilterCategory:(long long)a0;
- (void)setIsChatBot:(char)a0;
- (void)setResponded:(char)a0;
- (void)setSendersUnknown:(char)a0;
- (void)setShowingEditHistoryForChatItemGUIDs:(id)a0;
- (void)setSpam:(char)a0;

@end
