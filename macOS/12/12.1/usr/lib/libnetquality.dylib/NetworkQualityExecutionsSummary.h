@class NSError;

@interface NetworkQualityExecutionsSummary : NSObject

@property long long saturatedDownloadThroughput;
@property long long saturatedUploadThroughput;
@property long long saturatedDownloadFlows;
@property long long saturatedUploadFlows;
@property long long downloadSaturationReason;
@property long long uploadSaturationReason;
@property long long responsiveness;
@property long long downloadResponsiveness;
@property long long uploadResponsiveness;
@property (retain) NSError *error;
@property (readonly) long long style;

+ (id)summaryForFastExecution;
+ (id)summaryForSplitExecution;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;

@end
