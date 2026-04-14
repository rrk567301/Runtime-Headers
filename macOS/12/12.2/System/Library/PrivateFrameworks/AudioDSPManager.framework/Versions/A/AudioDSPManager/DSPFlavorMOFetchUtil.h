@class NSManagedObjectContext;

@interface DSPFlavorMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchAll;
- (id)fetchWithCategory:(id)a0 mode:(id)a1;
- (id)fetchAllWithCategory:(id)a0 mode:(id)a1;
- (id)fetchWithFlavor:(id)a0;
- (id)fetchAllFlavorsExcept:(id)a0;

@end
