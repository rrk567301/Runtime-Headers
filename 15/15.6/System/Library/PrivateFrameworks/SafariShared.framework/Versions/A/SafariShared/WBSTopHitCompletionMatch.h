@interface WBSTopHitCompletionMatch : WBSBookmarkAndHistoryCompletionMatch {
    char _shouldPreload;
}

- (char)isTopHit;
- (id)initWithBookmarkAndHistoryCompletionMatch:(void *)a0 userInput:(id)a1 forQueryID:(long long)a2 shouldPreload:(char)a3;
- (id)parsecDomainIdentifier;
- (char)shouldPreload;

@end
