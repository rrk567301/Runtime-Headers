@class NSMutableArray;

@interface AXSSSpeechSynthesisQueue : NSObject

@property (class, readonly, nonatomic) AXSSSpeechSynthesisQueue *sharedInstance;

@property (retain, nonatomic) NSMutableArray *speechQueue;

- (void)clear;
- (void)enqueue:(id)a0;
- (id)dequeue;
- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;

@end
