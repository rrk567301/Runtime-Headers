@class NSString, HKTaskServerProxyProvider;

@interface HKWorkoutCondenserControl : NSObject <_HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)serverInterface;

- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)a0;
- (void)condenseWorkoutsForReason:(long long)a0 workoutBatchLimit:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)condensableWorkoutsWithCompletion:(id /* block */)a0;
- (void)condenseWorkoutWithUUID:(id)a0 completion:(id /* block */)a1;
- (void)condensedWorkoutsWithCompletion:(id /* block */)a0;
- (void)provenanceIDsWithUUID:(id)a0 sampleType:(id)a1 completion:(id /* block */)a2;

@end
