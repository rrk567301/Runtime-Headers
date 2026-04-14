@class NSDictionary, TRIClient, NSObject;
@protocol OS_dispatch_queue;

@interface CESRDatasetSamplingConfig : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    TRIClient *_trialClient;
    double _version;
    double _defaultSamplingRate;
    NSDictionary *_localeDictionary;
}

- (void).cxx_destruct;
- (id)init;
- (void)_disableSampling;
- (void)_loadConfig;
- (BOOL)_parseJSONObject:(id)a0;
- (void)_registerForTrialUpdates;
- (BOOL)shouldSampleRequestForLocale:(id)a0;

@end
