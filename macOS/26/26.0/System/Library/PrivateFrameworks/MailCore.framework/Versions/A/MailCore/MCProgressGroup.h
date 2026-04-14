@class NSProgress, NSMutableDictionary, MCDiscretionaryWorkScheduler;

@interface MCProgressGroup : NSObject {
    MCDiscretionaryWorkScheduler *_workScheduler;
    NSMutableDictionary *_progressBySlice;
}

@property (readonly, weak, nonatomic) NSProgress *parent;
@property (retain, nonatomic) MCDiscretionaryWorkScheduler *workScheduler;

- (id)init;
- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (void)modifyCompletedBy:(long long)a0 forSlice:(long long)a1;
- (void)modifyTotalBy:(long long)a0 forSlice:(long long)a1;
- (void)completeAllProgress;

@end
