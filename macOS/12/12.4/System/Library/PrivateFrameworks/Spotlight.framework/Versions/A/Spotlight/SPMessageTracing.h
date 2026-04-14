@class SPMessageTracingSearchSession, NSObject;
@protocol OS_dispatch_queue;

@interface SPMessageTracing : NSObject

@property (nonatomic) BOOL queryIsBeingRequested;
@property (nonatomic) BOOL resultIsBeingDisplayed;
@property (retain, nonatomic) SPMessageTracingSearchSession *currentSearchSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;
+ (id)shared;
+ (id)sharedSearchSession;

- (void).cxx_destruct;
- (void)endSearchSession;
- (id)getCategoryForResult:(id)a0;
- (id)signpostLog;
- (unsigned long long)windowOpenLogID;
- (unsigned long long)queryRequestLogID;
- (unsigned long long)resultSelectionLogID;
- (void)startSearchSessionWithOpenMethod:(id)a0;
- (void)countWindowShown;
- (void)countWindowHidden;
- (BOOL)signpostsEnabled;
- (void)signpostWindowOpenBegin;
- (void)signpostWindowOpenEnd;
- (void)signpostQueryRequested;
- (void)signpostQueryCompleted;
- (void)signpostResultSelected;
- (void)signpostResultDisplayed;

@end
