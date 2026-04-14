@class NSMutableArray;

@interface AXSSSpeechSynthesisQueue : NSObject

@property (class, readonly, nonatomic) AXSSSpeechSynthesisQueue *sharedInstance;

@property (retain, nonatomic) NSMutableArray *speechQueue;

- (id)dequeue;
- (void)enqueue:(id)a0;
- (void)clear;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;

@end
