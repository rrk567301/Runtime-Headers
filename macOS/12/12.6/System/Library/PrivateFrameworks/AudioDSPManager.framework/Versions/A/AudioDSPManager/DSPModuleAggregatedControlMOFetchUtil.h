@class NSManagedObjectContext;

@interface DSPModuleAggregatedControlMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchAllWithDSPModuleType:(id)a0;
- (id)fetchDefaultConfiguration:(id)a0;

@end
