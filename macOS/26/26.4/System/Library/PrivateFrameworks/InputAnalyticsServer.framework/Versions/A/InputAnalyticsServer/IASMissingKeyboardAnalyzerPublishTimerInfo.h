@class NSDictionary, NSDate;

@interface IASMissingKeyboardAnalyzerPublishTimerInfo : NSObject

@property (retain, nonatomic) NSDictionary *debugInfo;
@property (retain, nonatomic) NSDictionary *classifierProbabilities;
@property (retain, nonatomic) NSDictionary *eventToPublish;
@property (retain, nonatomic) NSDate *timerStartTime;
@property (retain, nonatomic) NSDate *retroactiveCancellationCutoffTime;

- (void).cxx_destruct;

@end
