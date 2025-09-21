@class NSString, HDSQLitePredicate, HDProfile, NSSet, _HKFilter, NSNumber, HKQuantityType;

@interface HDStatisticsCollectionCalculatorDefaultDataSource : NSObject <HDStatisticsCollectionQueryServerDataSource, HDStatisticsCollectionCalculatorDataSource> {
    HDSQLitePredicate *_fullPredicate;
    char _isRealQuantityType;
}

@property (copy, nonatomic) _HKFilter *filter;
@property (copy, nonatomic) NSNumber *anchor;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (copy, nonatomic) HDSQLitePredicate *predicate;
@property (copy, nonatomic) NSSet *restrictedSourceEntities;
@property (nonatomic) char includeUnfrozenSeries;
@property (readonly, copy, nonatomic) NSNumber *maxRowID;
@property (nonatomic) long long shouldContinueFrequency;
@property (copy, nonatomic) id /* block */ shouldContinueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initForProfile:(id)a0 quantityType:(id)a1 predicate:(id)a2 restrictedSourceEntities:(id)a3;
- (id)initForProfile:(id)a0 categoryType:(id)a1 predicate:(id)a2 restrictedSourceEntities:(id)a3;
- (char)addValuesForQuantitySamples:(id)a0 calculator:(id)a1 includeSeries:(char)a2 error:(id *)a3;
- (char)collectionCalculator:(id)a0 queryForInterval:(id)a1 error:(id *)a2 sampleHandler:(id /* block */)a3 mergeHandler:(id /* block */)a4;

@end
