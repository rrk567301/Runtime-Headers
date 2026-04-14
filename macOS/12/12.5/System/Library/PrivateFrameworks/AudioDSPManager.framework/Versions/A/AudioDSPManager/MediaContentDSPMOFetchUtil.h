@class NSManagedObjectContext;

@interface MediaContentDSPMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchWithCategory:(id)a0 mode:(id)a1 dspFlavor:(id)a2 isInput:(id)a3 portType:(id)a4 dspModuleDescriptions:(id)a5;
- (id)fetchAllWithCategory:(id)a0 mode:(id)a1 dspFlavor:(id)a2 isInput:(id)a3 portType:(id)a4 dspModuleDescriptions:(id)a5;

@end
