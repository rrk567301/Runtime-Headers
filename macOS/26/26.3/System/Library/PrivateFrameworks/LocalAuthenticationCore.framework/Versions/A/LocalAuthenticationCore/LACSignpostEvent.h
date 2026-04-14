@interface LACSignpostEvent : NSObject {
    id /* block */ _sendBlock;
}

- (void).cxx_destruct;
- (void)send;
- (id)initWithSendBlock:(id /* block */)a0;

@end
