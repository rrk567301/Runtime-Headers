@interface IDSTransactionQueueTransaction : NSObject

@property (nonatomic) char readyToExecute;
@property (retain, nonatomic) id item;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0;
- (id)initWithItem:(id)a0 readyToExecute:(char)a1;

@end
