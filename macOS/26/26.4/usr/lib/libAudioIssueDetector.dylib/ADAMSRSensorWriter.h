@class NSObject;
@protocol OS_dispatch_queue, SRSensorWriterProvider;

@interface ADAMSRSensorWriter : NSObject {
    id<SRSensorWriterProvider> _provider;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL isValidSRSensorWriterPresent;
@property (readonly, nonatomic) BOOL isMonitoring;
@property (readonly, nonatomic) BOOL isBundleIdentifierEligible;

- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)provideSample:(id)a0 error:(id *)a1;
- (BOOL)provideSample:(id)a0 continuousTimestamp:(unsigned long long)a1 error:(id *)a2;
- (void)_commonInitWithProvider:(id)a0;
- (id)initWithSensorType:(long long)a0 bundleIdentifier:(id)a1;

@end
