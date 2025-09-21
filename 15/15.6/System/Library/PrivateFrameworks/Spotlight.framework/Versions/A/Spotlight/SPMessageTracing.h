@class SPMessageTracingSearchSession, NSObject;
@protocol OS_dispatch_queue;

@interface SPMessageTracing : NSObject

@property (nonatomic) char queryIsBeingRequested;
@property (nonatomic) char resultIsBeingDisplayed;
@property (retain, nonatomic) SPMessageTracingSearchSession *currentSearchSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;
+ (id)shared;
+ (id)sharedSearchSession;

- (void).cxx_destruct;
- (void)endSearchSession;
- (unsigned long long)windowOpenLogID;
- (void)countWindowHidden;
- (void)countWindowShown;
- (id)getCategoryForResult:(id)a0;
- (unsigned long long)queryRequestLogID;
- (unsigned long long)resultSelectionLogID;
- (id)signpostLog;
- (void)signpostQueryCompleted;
- (void)signpostQueryRequested;
- (void)signpostResultDisplayed;
- (void)signpostResultSelected;
- (void)signpostWindowOpenBegin;
- (void)signpostWindowOpenEnd;
- (char)signpostsEnabled;
- (void)startSearchSessionWithOpenMethod:(id)a0;

@end
