@interface SGQuickResponsesReplies : NSObject

+ (id)normalizeReplyText:(id)a0;
+ (id)normalizeReplyTextInternal:(id)a0;
+ (id)repliesWithArray:(id)a0;

- (id)initWithArray:(id)a0;
- (id)normalizedReplyTextsSet;
- (id)replyTextForIndex:(unsigned long long)a0 position:(unsigned long long)a1;
- (id)replyTextForIndexAndPosition:(id)a0;
- (id)replyTextsForIndex:(unsigned long long)a0;
- (unsigned long long)replyCountForIndex:(unsigned long long)a0;
- (unsigned long long)replyTextCount;
- (unsigned long long)replyClassCount;
- (unsigned long long)modelCount;
- (unsigned long long)maxDistinctReplies;

@end
