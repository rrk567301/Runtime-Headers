@interface LACSignpostEvent : NSObject {
    id /* block */ _sendBlock;
}

- (void)send;
- (void).cxx_destruct;
- (id)initWithSendBlock:(id /* block */)a0;

@end
