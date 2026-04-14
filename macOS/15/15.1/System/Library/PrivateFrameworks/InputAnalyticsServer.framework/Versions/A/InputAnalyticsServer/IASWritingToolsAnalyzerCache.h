@class NSString, NSArray, IASignalAnalyticsObject, NSDate;

@interface IASWritingToolsAnalyzerCache : NSObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *requestUI;
@property (nonatomic) BOOL usedIndexPage;
@property (copy, nonatomic) NSString *featureDetails;
@property (nonatomic) BOOL isEditable;
@property (copy, nonatomic) NSString *inputText;
@property (copy, nonatomic) NSString *resultText;
@property (retain, nonatomic) NSDate *modelStartTime;
@property (nonatomic) double totalModelRuntime;
@property (retain, nonatomic) NSDate *reviewStartTime;
@property (nonatomic) double totalReviewTime;
@property (copy, nonatomic) NSString *featureModel;
@property (retain, nonatomic) NSArray *warnings;
@property (copy, nonatomic) NSString *failureReason;
@property (nonatomic) unsigned long long numResultsOffered;
@property (nonatomic) unsigned long long numResultsAccepted;
@property (nonatomic) BOOL usedCopy;
@property (nonatomic) BOOL usedShare;
@property (nonatomic) unsigned long long resultIndex;
@property (retain, nonatomic) IASignalAnalyticsObject *resultsOfferedSignal;

- (id)init;
- (void).cxx_destruct;

@end
