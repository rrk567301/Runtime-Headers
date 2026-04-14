@class NSString, NSMutableArray, NSDate;

@interface MADownloadProgress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) id /* block */ clientProgressCallback;
@property (retain, nonatomic) NSString *taskDescriptor;
@property (retain, nonatomic) NSString *autoJobId;
@property (retain, nonatomic) NSString *downloadPath;
@property (retain, nonatomic) NSString *nsurlSessionTaskID;
@property (nonatomic) long long totalBytesWritten;
@property (nonatomic) long long totalExpectedBytes;
@property (nonatomic) double estimatedTimeRemaining;
@property (nonatomic) BOOL isStalled;
@property long long throughputCalculationWindowSize;
@property (nonatomic) double currentThroughput;
@property (retain) NSDate *lastProgressSendDate;
@property double downloadPercentageLastSentToClient;
@property double progressUpdateMinTimeInterval;
@property double progressUpdateMinDelta;
@property (retain) NSMutableArray *progressBytesHistory;
@property (retain) NSMutableArray *progressTimeStampHistory;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)forwardProgressIfRequired;
- (void)handleUpdateFromURLSessionDelegate:(unsigned long long)a0 totalBytesWritten:(unsigned long long)a1 downloadSize:(unsigned long long)a2;
- (id)initWithProgressCallback:(id /* block */)a0;
- (void)triggerStallCheck:(double)a0;

@end
