@class NSString, DDMBook;

@interface DDMTopicPreloadOperation : NSOperation {
    NSString *_topicID;
    DDMBook *_book;
    BOOL _executing;
    BOOL _finished;
}

@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;

+ (id)operationWithTopicID:(id)a0 book:(id)a1;

- (void)setExecuting:(BOOL)a0;
- (void)setFinished:(BOOL)a0;
- (void)main;
- (void)start;
- (void).cxx_destruct;
- (id)initWithTopicID:(id)a0 book:(id)a1;

@end
