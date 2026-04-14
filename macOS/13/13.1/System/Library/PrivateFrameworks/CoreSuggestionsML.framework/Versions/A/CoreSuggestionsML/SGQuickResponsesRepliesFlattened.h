@class NSArray, _PASLock;

@interface SGQuickResponsesRepliesFlattened : SGQuickResponsesReplies {
    NSArray *_replyTexts;
    _PASLock *_normalizedReplyTextsSet;
    unsigned long long _replyTextStringsCount;
}

+ (unsigned long long)countReplyTextsForArray:(id)a0;
+ (id)normalizedReplyTextsSetForArray:(id)a0;

- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
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
