@class NSManagedObjectContext;

@interface VPContentDSPMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchWithCategory:(id)a0 mode:(id)a1 dspFlavor:(id)a2 isInput:(id)a3 portType:(id)a4 hwHasVP:(id)a5 dspModuleDescriptions:(id)a6;
- (id)fetchAllWithCategory:(id)a0 mode:(id)a1 dspFlavor:(id)a2 isInput:(id)a3 portType:(id)a4 hwHasVP:(id)a5 dspModuleDescriptions:(id)a6;

@end
