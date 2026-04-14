@class NSManagedObjectContext;

@interface DeviceConfigurationMOFetchUtil : NSObject {
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (id)fetchWithPort:(id)a0;
- (id)fetchAllWithPort:(id)a0;

@end
