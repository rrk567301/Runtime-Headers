@class NSObject, NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;

@interface CESRDictationOnDeviceSampling : NSObject

@property (nonatomic) long long numberOfRequestsTillNow;
@property (retain, nonatomic) NSDate *samplingDate;
@property (retain, nonatomic) NSMutableDictionary *dictationSamplingVariables;
@property (nonatomic) char isDeviceSampledFromConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue;

+ (id)sharedManager;
+ (char)_isInternalInstall;
+ (char)_isSamplingAllowed;
+ (id)_readDictationSampledPlist;

- (id)init;
- (void).cxx_destruct;
- (char)_isSamplingDateCurrent;
- (void)_setRequestCount:(long long)a0;
- (void)_setSamplingDateToCurrentDate;
- (void)_updateDictationSampledPlist;
- (void)incrementSampledRequestCount;
- (char)isRequestSelectedForSamplingFromConfigForLanguage:(id)a0;

@end
