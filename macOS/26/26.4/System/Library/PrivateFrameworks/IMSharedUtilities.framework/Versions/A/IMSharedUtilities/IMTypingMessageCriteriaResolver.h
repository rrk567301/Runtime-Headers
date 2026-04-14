@interface IMTypingMessageCriteriaResolver : NSObject

+ (BOOL)isCancelTypingMessage:(struct IMTypingMessageCriteria { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; id /* block */ x6; })a0;
+ (BOOL)isDefaultTypingMessage:(struct IMTypingMessageCriteria { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; id /* block */ x6; })a0;
+ (BOOL)isIncomingTypingOrCancelTypingMessage:(struct IMTypingMessageCriteria { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; id /* block */ x6; })a0;
+ (BOOL)isTypingMessageForCandidateCriteria:(struct IMTypingMessageCriteria { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; id /* block */ x6; })a0 ofKind:(long long)a1;
+ (BOOL)isTypingOrCancelTypingMessage:(struct IMTypingMessageCriteria { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; id /* block */ x6; })a0;

@end
