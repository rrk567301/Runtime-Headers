@class NSString, DDMBook;

@interface DDMTopicPreloadOperation : NSOperation {
    NSString *_topicID;
    DDMBook *_book;
    char _executing;
    char _finished;
}

@property (readonly, getter=isExecuting) char executing;
@property (readonly, getter=isFinished) char finished;

+ (id)operationWithTopicID:(id)a0 book:(id)a1;

- (void).cxx_destruct;
- (void)start;
- (void)main;
- (void)setFinished:(char)a0;
- (void)setExecuting:(char)a0;
- (id)initWithTopicID:(id)a0 book:(id)a1;

@end
