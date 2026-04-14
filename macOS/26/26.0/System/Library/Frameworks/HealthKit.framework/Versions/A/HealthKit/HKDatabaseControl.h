@class NSString, HKProxyProvider;

@interface HKDatabaseControl : NSObject <_HKXPCExportable, HKDatabaseControlClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)remoteInterface;
- (void).cxx_destruct;
- (void)performMigrationWithCompletion:(id /* block */)a0;
- (void)classifiedDeletedSampleInfoWithReferenceDate:(id)a0 anchor:(long long)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (void)classifiedDeletedSampleInfoWithReferenceDate:(id)a0 createdOnOrAfter:(id)a1 createdBefore:(id)a2 limit:(long long)a3 completion:(id /* block */)a4;
- (void)deletedSampleDetailWithReferenceDate:(id)a0 matchingPredicatesOnly:(BOOL)a1 sampleUUID:(id)a2 completion:(id /* block */)a3;
- (void)deletedSampleInfoWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)deletedSamplesDetailWithReferenceDate:(id)a0 matchingPredicatesOnly:(BOOL)a1 samplesWithDifferentPruningOutcomesOnly:(BOOL)a2 anchor:(long long)a3 limit:(long long)a4 completion:(id /* block */)a5;
- (void)deletedSamplesDetailWithReferenceDate:(id)a0 matchingPredicatesOnly:(BOOL)a1 samplesWithDifferentPruningOutcomesOnly:(BOOL)a2 createdOnOrAfter:(id)a3 createdBefore:(id)a4 limit:(long long)a5 completion:(id /* block */)a6;
- (void)getHealthDirectorySizeInBytesWithCompletion:(id /* block */)a0;
- (id)healthDatabaseIdentifierWithError:(id *)a0;
- (void)hkqa_generateDemoDataWithDurationInDays:(long long)a0 completion:(id /* block */)a1;
- (void)hkqa_statisticsWithCompletion:(id /* block */)a0;
- (void)obliterateHealthDataWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pruneSamplesWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)showAndDeletedSampleInfoWithReferenceDate:(id)a0 completion:(id /* block */)a1;
- (void)showWithReferenceDate:(id)a0 deletedSamplesOnly:(BOOL)a1 completion:(id /* block */)a2;

@end
