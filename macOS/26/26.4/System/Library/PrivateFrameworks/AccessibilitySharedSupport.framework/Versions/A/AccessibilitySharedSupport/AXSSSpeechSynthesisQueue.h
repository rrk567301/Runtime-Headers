@class NSMutableArray;

@interface AXSSSpeechSynthesisQueue : NSObject

@property (class, readonly, nonatomic) AXSSSpeechSynthesisQueue *sharedInstance;

@property (retain, nonatomic) NSMutableArray *speechQueue;

- (void)enqueue:(id)a0;
- (id)dequeue;
- (void)clear;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;

@end
