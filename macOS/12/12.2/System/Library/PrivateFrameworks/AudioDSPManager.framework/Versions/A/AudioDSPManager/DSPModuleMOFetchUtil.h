@class NSManagedObjectContext;

@interface DSPModuleMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchWithType:(id)a0;
- (id)fetchAllWithType:(id)a0;
- (id)fetchWithCategory:(id)a0 mode:(id)a1 portType:(id)a2 dspFlavor:(id)a3;
- (id)fetchAllWithCategory:(id)a0 mode:(id)a1 portType:(id)a2 dspFlavor:(id)a3;

@end
