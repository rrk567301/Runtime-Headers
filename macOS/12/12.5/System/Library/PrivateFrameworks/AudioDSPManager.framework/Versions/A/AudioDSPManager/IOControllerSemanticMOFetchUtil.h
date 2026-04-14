@class NSManagedObjectContext;

@interface IOControllerSemanticMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchAll;
- (id)fetchWithCategory:(id)a0 mode:(id)a1;
- (id)fetchAllWithCategory:(id)a0 mode:(id)a1;
- (id)fetchAllWithCategory:(id)a0 exceptMode:(id)a1;

@end
