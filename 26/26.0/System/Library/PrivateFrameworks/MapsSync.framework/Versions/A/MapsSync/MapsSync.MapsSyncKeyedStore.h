@class NSDictionary, _TtC8MapsSync18MapsSyncKeyedStore;

@interface MapsSync.MapsSyncKeyedStore : NSObject {
    void /* unknown type, empty encoding */ store;
}

@property (class, nonatomic, readonly) _TtC8MapsSync18MapsSyncKeyedStore *shared;

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (void)checkEntitlements;

- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (long long)longLongForKey:(id)a0;
- (void)setArray:(id)a0 key:(id)a1;
- (void)setData:(id)a0 key:(id)a1;
- (void)setDictionary:(id)a0 key:(id)a1;
- (void)setDouble:(double)a0 key:(id)a1;
- (void)setInt64:(long long)a0 key:(id)a1;
- (void)setObject:(id)a0 key:(id)a1;
- (void)setString:(id)a0 key:(id)a1;
- (void)setValue:(BOOL)a0 key:(id)a1;

@end
