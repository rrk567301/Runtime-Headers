@class NSUUID, NSArray;

@interface IMChatContext : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long serviceVariant;
@property (readonly, nonatomic) long long filterCategory;
@property (readonly, nonatomic, getter=isSpam) char spam;
@property (readonly, nonatomic, getter=areSendersUnknown) char sendersUnknown;
@property (readonly, nonatomic, getter=hasResponded) char responded;
@property (readonly, nonatomic) NSUUID *activeTelephonyConversationUUID;
@property (readonly, nonatomic) NSArray *showingEditHistoryForChatItemGUIDs;
@property (readonly, nonatomic, getter=isChatBot) char isChatBot;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_copyWithClass:(Class)a0 zone:(struct _NSZone { } *)a1;

@end
