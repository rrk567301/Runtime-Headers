@interface CATransactionCompletionItem : NSObject {
    void *_priv;
}

+ (id)completionItem;

- (void)invalidate;
- (void)dealloc;
- (id)init;

@end
