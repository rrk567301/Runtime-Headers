@class NSString;

@interface PETMessageTracerLoggingOutlet : NSObject <PETLoggingOutlet>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_supportedEvents;

- (void)logUnsignedIntegerValue:(unsigned long long)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3 metaData:(id)a4;
- (void)setUnsignedIntegerValue:(unsigned long long)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3 metaData:(id)a4;
- (void)logDoubleValue:(double)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3 metaData:(id)a4;
- (void)logErrorForEvent:(id)a0 featureId:(id)a1 reason:(id)a2;
- (BOOL)_isFeatureSupported:(id)a0;
- (id)_filterEvent:(id)a0 properties:(id)a1;
- (void)_logUnsignedIntegerValue:(unsigned long long)a0 forEvent:(id)a1 featureId:(id)a2 stringifiedProperties:(id)a3;
- (void)_setKeyValuePairsForMessage:(struct __asl_object_s { } *)a0 withStringifiedPairs:(id)a1;

@end
