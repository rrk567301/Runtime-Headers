@class NSData;

@interface MapsSync.MapsSyncAnalyticsIdentifier : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _data;
}

@property (nonatomic, readonly) NSData *data;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (Class)managedObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
