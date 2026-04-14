@class NSManagedObjectContext;

@interface HWDSPMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchWithPortType:(id)a0 dspFlavor:(id)a1;
- (id)fetchAllWithPortType:(id)a0 dspFlavor:(id)a1;

@end
