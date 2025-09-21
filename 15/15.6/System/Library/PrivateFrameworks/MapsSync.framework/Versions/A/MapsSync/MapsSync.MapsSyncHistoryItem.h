@interface MapsSync.MapsSyncHistoryItem : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _position;
}

@property (nonatomic, readonly) double position;

+ (void)fetch:(long long)a0 :(long long)a1 :(id)a2 sort:(long long)a3 ascending:(char)a4 completion:(id /* block */)a5;
+ (void)fetch:(long long)a0 :(long long)a1 :(id)a2 sort:(long long)a3 ascending:(char)a4 completionWithError:(id /* block */)a5;
+ (id)fetchHistoryItemForIdentifier:(id)a0;

- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (Class)managedObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
