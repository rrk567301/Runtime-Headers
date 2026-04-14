@class NSMutableArray;
@protocol VSMessageQueueDelegate;

@interface VSMessageQueue : NSObject

@property (retain, nonatomic) NSMutableArray *messages;
@property (weak, nonatomic) id<VSMessageQueueDelegate> delegate;

- (void)addMessage:(id)a0;
- (id)removeAllMessages;
- (void).cxx_destruct;
- (id)init;

@end
