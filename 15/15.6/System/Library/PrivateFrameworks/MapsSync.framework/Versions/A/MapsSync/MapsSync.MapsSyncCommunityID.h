@class NSString, NSSet;

@interface MapsSync.MapsSyncCommunityID : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _communityIdentifier;
    void /* unknown type, empty encoding */ _expired;
    void /* unknown type, empty encoding */ _usedCount;
    void /* unknown type, empty encoding */ _reviewedPlaces;
    void /* unknown type, empty encoding */ _rapRecords;
}

@property (nonatomic, readonly) NSString *communityIdentifier;
@property (nonatomic, readonly) char expired;
@property (nonatomic, readonly) long long usedCount;
@property (nonatomic, readonly) NSSet *rapRecords;
@property (nonatomic, readonly) NSSet *reviewedPlaces;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (Class)managedObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
