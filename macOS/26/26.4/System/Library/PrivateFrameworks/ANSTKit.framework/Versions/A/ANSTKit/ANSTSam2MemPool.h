@class NSMutableArray;

@interface ANSTSam2MemPool : NSObject {
    unsigned long long _num_mask;
    unsigned long long _num_obj;
    NSMutableArray *_history_mem_pool;
    NSMutableArray *_history_obj_pool;
    BOOL _has_condition;
    unsigned long long _magic_delta_val;
}

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } curCondTime;
@property (nonatomic) unsigned long long magic_num_interval_to_cond_frame;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)addConditionFrameWithMem:(id)a0 Pos:(id)a1 Obj:(id)a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (BOOL)addNonConditionFrameWithMem:(id)a0 Pos:(id)a1 Obj:(id)a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (id)getHistory_mem_pool;
- (id)getHistory_obj_pool;
- (unsigned long long)getIntervalCount;
- (id)initWithNumMask:(unsigned long long)a0 andNumObj:(unsigned long long)a1;

@end
