@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CESRDictationOnDeviceSampling : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_samplingDate;
    unsigned long long _sampledRequestCount;
}

+ (id)sharedInstance;
+ (BOOL)_isInternalInstall;
+ (id)_readSamplingVariablesFromPlist;
+ (BOOL)_isSamplingAllowed;

- (void).cxx_destruct;
- (id)init;
- (id)_initWithQueue:(id)a0 samplingVariables:(id)a1;
- (void)_writeSamplingVariablesToPlist;
- (void)incrementSampledRequestCount;
- (BOOL)shouldSampleRequest;

@end
