@class EMMessage, NSString, MUISearchInstantAnswer, SFCard, EMMessageList;
@protocol EMCollectionItemID;

@interface MUISearchInstantAnswersSuggestion : MUISearchSuggestion

@property (readonly, nonatomic) id<EMCollectionItemID> itemID;
@property (readonly, nonatomic) EMMessageList *messageList;
@property (readonly, nonatomic) EMMessage *message;
@property (readonly, nonatomic) NSString *messageConversationID;
@property (readonly, nonatomic) MUISearchInstantAnswer *instantAnswer;
@property (readonly, nonatomic) SFCard *feedbackInlineCard;

- (id)category;
- (void).cxx_destruct;
- (id)_conversationID;
- (id)initWithInstantAnswer:(id)a0;
- (id)initWithMessage:(id)a0 instantAnswer:(id)a1 messageList:(id)a2;
- (void)populateInlineCard;

@end
