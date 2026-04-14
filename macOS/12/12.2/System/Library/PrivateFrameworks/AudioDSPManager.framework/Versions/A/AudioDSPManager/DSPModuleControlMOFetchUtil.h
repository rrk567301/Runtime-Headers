@class NSManagedObjectContext;

@interface DSPModuleControlMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchWithControlName:(id)a0 value:(id)a1;
- (id)fetchAllWithControlName:(id)a0 value:(id)a1;
- (id)fetchDefaultControlwithDSPModuleType:(id)a0 controlName:(id)a1;
- (id)fetchWithAggregatedControl:(id)a0 controlName:(id)a1;

@end
