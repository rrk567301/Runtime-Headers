@class NSMutableArray;

@interface AXSSSpeechSynthesisQueue : NSObject

@property (class, readonly, nonatomic) AXSSSpeechSynthesisQueue *sharedInstance;

@property (retain, nonatomic) NSMutableArray *speechQueue;

- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (void)clear;
- (void)enqueue:(id)a0;
- (id)dequeue;

@end
