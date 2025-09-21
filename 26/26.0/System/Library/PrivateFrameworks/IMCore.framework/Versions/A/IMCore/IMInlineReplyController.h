@class NSString, IMMessageItem;
@protocol IMChatItemRules;

@interface IMInlineReplyController : IMChatItemFilterController {
    id<IMChatItemRules> _chatItemRules;
}

@property (copy, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) IMMessageItem *threadOriginator;

- (id)notificationName;
- (void).cxx_destruct;
- (id)generateChatItemRules;
- (id)initWithChat:(id)a0 threadIdentifier:(id)a1 threadOriginator:(id)a2;
- (BOOL)itemMatchesFilter:(id)a0;
- (id)itemsToPrepend;

@end
