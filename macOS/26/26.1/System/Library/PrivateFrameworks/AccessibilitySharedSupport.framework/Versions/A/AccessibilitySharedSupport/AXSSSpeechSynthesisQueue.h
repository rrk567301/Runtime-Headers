@class NSMutableArray;

@interface AXSSSpeechSynthesisQueue : NSObject

@property (class, readonly, nonatomic) AXSSSpeechSynthesisQueue *sharedInstance;

@property (retain, nonatomic) NSMutableArray *speechQueue;

- (id)dequeue;
- (void)clear;
- (void).cxx_destruct;
- (void)enqueue:(id)a0;
- (BOOL)isEmpty;
- (id)init;

@end
