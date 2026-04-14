@class NSObject, NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;

@interface CESRDictationOnDeviceSampling : NSObject

@property (nonatomic) long long numberOfRequestsTillNow;
@property (retain, nonatomic) NSDate *currentSamplingDate;
@property (retain, nonatomic) NSMutableDictionary *dictationSamplingVaribles;
@property (nonatomic) BOOL isRequestConsideredForSampling;
@property (nonatomic) BOOL isDeviceSampledFromConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue;

+ (id)sharedManager;
+ (id)_readDictationSampledPlist;

- (id)init;
- (void).cxx_destruct;
- (void)setRequestCount:(long long)a0;
- (void)incrementRequestCount;
- (void)decrementRequestCount;
- (void)updateDateToCurrent;
- (void)resetRequestCount;
- (void)createDictationSampledPlistIfItDoesNotExist;
- (BOOL)isSamplingDateCurrent;
- (BOOL)isRequestSelectedForSamplingFromConfigForLanguage:(id)a0;
- (void)_createDictationSampledPlistIfItDoesNotExist;
- (void)_writeDictationSamplingVariablesToFile:(id)a0;
- (void)updateRequestCountWithFlag:(BOOL)a0;
- (BOOL)isRequestSelectedForSampling;

@end
