@interface MSJunkTriageAction : MSMoveTriageAction

@property (readonly, nonatomic) char hasNonJunkMessages;

+ (char)hasNonJunkMessagesInSelection:(id)a0;

- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3;

@end
