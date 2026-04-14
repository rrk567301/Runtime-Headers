@interface WBSExtensionMessageReplySender : NSObject {
    id /* block */ _block;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)a0;
- (void)sendReplyIfNotAlreadySent:(id)a0;

@end
