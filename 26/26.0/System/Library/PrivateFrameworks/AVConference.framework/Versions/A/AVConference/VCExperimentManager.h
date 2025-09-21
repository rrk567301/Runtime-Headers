@class NSMutableDictionary;

@interface VCExperimentManager : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateLock;
    struct opaqueRTCReporting { } *_reportingAgent;
    NSMutableDictionary *_clientExperiments;
}

+ (id)sha256:(id)a0;
+ (unsigned long long)xorSum:(id)a0;

- (void)dealloc;
- (double)samplingFactor:(id)a0;
- (int)experimentGroup:(unsigned int *)a0 forExperiment:(id)a1;
- (id)initWithSamplingUUID:(id)a0;
- (BOOL)isEnabledExperiment:(id)a0 forceDisable:(BOOL)a1;
- (BOOL)isUUIDSampledForExperimentation:(id)a0;
- (int)overrideExperimentGroup:(unsigned int)a0 forExperiment:(id)a1;
- (int)setQRExperimentsDictionary:(id)a0;
- (void)setReportingAgent:(struct opaqueRTCReporting { } *)a0;
- (void)setupInitialClientExperiments:(id)a0 samplingUUID:(id)a1;
- (id)valueForExperiment:(id)a0 samplingUUID:(id)a1 samplingThreshold:(id)a2;

@end
