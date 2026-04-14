@interface CATransactionCompletionItem : NSObject {
    void *_priv;
}

+ (id)completionItem;

- (void)dealloc;
- (void)invalidate;
- (id)init;

@end
