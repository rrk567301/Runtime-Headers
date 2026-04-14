@class NSMutableArray;

@interface MADConfidenceTracker : NSObject {
    NSMutableArray *_history;
    double _confidence;
}

- (void).cxx_destruct;
- (id)init;
- (double)updateConfidence:(double)a0;

@end
