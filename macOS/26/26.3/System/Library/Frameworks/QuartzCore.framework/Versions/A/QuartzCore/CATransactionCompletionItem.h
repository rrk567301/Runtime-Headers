@interface CATransactionCompletionItem : NSObject {
    void *_priv;
}

+ (id)completionItem;

- (void)invalidate;
- (id)init;
- (void)dealloc;

@end
