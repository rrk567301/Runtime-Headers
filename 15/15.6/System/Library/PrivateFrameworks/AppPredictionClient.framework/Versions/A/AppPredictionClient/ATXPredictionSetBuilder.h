@class NSMutableData;

@interface ATXPredictionSetBuilder : NSObject {
    NSMutableData *_data;
    int _predictionCount;
    char _finished;
}

- (id)init;
- (void).cxx_destruct;
- (id)finish;
- (void)recordPrediction:(id)a0 score:(float)a1;

@end
