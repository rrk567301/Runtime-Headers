@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CLTTool : NSObject

@property (retain, nonatomic) NSMutableArray *signalSources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *signalQueue;

- (int)main;
- (void).cxx_destruct;
- (id)init;
- (void)handleSignal:(int)a0;

@end
