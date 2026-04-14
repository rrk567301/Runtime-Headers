@class NSManagedObjectContext;

@interface IOControllerConfigurationMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchWithCategory:(id)a0 mode:(id)a1;
- (id)fetchAllWithCategory:(id)a0 mode:(id)a1;

@end
