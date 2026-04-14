@class NSManagedObjectContext;

@interface PortMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchWithPortType:(id)a0;
- (id)fetchWithPortType:(id)a0 hwHasVP:(BOOL)a1;
- (id)fetchAllWithPortType:(id)a0 hwHasVP:(BOOL)a1;

@end
