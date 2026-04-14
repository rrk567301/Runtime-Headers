@class NSMutableDictionary;

@interface ATXGroupHistogram : NSObject {
    NSMutableDictionary *_histogram;
    BOOL _isTotalScoreValid;
    double _total;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)init;
- (double)getScoreForGroup:(id)a0;
- (void)addScore:(double)a0 group:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (double)_getTotalScore;

@end
