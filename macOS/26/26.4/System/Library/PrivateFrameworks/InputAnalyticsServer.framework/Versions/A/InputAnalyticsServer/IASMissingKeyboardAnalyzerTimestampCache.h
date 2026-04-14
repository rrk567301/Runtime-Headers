@class NSDate;

@interface IASMissingKeyboardAnalyzerTimestampCache : NSObject

@property (retain, nonatomic) NSDate *keyboardRequestedCreationTimestamp;
@property (retain, nonatomic) NSDate *keyboardRequestedReceivedTimestamp;
@property (retain, nonatomic) NSDate *keyboardDismissedCreationTimestamp;
@property (retain, nonatomic) NSDate *keyboardDismissedReceivedTimestamp;
@property (retain, nonatomic) NSDate *detectionStartTimestamp;
@property (retain, nonatomic) NSDate *detectionEndTimestamp;
@property (retain, nonatomic) NSDate *screenshotEndTimestamp;

- (void).cxx_destruct;

@end
