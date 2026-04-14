@class NSString, NSMutableSet;

@interface IASMissingKeyboardAnalyzerSignalTimerCycleInfo : NSObject

@property (copy, nonatomic) NSString *startSignal;
@property (retain, nonatomic) NSMutableSet *signalsReceived;
@property (nonatomic) BOOL appHasMultipleForegroundScenes;

- (void).cxx_destruct;

@end
