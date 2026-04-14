@interface HKBloodPressureClassificationManager : NSObject <HKKeyValueDomainObserver> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ bloodPressureDefaultsDomain;
    void /* unknown type, empty encoding */ observerQueue;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ pregnancyModelProvider;
}

- (void)stopObserving:(id)a0;
- (void)didUpdateKeyValueDomain:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (id)init;
- (void)startObserving:(id)a0;
- (void).cxx_destruct;
- (id)categoriesForClassificationGuidelines:(long long)a0 error:(id *)a1;
- (id)categoryDataForCategory:(id)a0 error:(id *)a1;
- (id)categoryForClassificationGuidelines:(long long)a0 systolic:(id)a1 diastolic:(id)a2 age:(id)a3;
- (void)classificationGuidelinesOnDate:(id)a0 completionHandler:(id /* block */)a1;
- (void)currentClassificationGuidelinesWithCompletionHandler:(id /* block */)a0;
- (long long)defaultClassificationGuidelinesForCountryCode:(id)a0;
- (BOOL)hypertensiveEscalationForClassificationGuidelines:(long long)a0 systolic:(id)a1 diastolic:(id)a2 age:(id)a3;
- (BOOL)isClassificationAgeGated;
- (void)preferredClassificationGuidelinesWithCompletionHandler:(id /* block */)a0;
- (void)removePreferredClassificationGuidelinesWithCompletionHandler:(id /* block */)a0;
- (void)updatePreferredClassificationGuidelines:(long long)a0 completionHandler:(id /* block */)a1;

@end
