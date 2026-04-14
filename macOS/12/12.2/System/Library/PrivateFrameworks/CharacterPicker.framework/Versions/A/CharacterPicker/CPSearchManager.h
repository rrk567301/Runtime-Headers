@class NSString;

@interface CPSearchManager : NSObject {
    NSString *_lastSearchString;
    unsigned long long _transactionID;
}

+ (id)sharedSearchManager;

- (void)dealloc;
- (void)_searchEmojiStringByCoreEmoji:(id)a0 inLanguages:(id)a1 maxResults:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)emojiTokensForSearchString:(id)a0 inLanguages:(id)a1 maxResults:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (void)searchForCharactersWithSearchString:(id)a0 maxCount:(long long)a1 emojiOnlyMode:(BOOL)a2 usingBlock:(id /* block */)a3;
- (id)infoForCharcater:(id)a0 infoTag:(id)a1;
- (void)setLastSearchedString:(id)a0;

@end
