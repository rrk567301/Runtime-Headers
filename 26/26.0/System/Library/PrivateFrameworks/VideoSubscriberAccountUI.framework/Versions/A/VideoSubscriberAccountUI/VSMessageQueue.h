@class NSMutableArray;
@protocol VSMessageQueueDelegate;

@interface VSMessageQueue : NSObject

@property (retain, nonatomic) NSMutableArray *messages;
@property (weak, nonatomic) id<VSMessageQueueDelegate> delegate;

- (id)removeAllMessages;
- (id)init;
- (void)addMessage:(id)a0;
- (void).cxx_destruct;

@end
