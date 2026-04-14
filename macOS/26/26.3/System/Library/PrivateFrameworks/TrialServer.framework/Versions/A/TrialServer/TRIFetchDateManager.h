@class TRIKVStore;

@interface TRIFetchDateManager : NSObject <TRIDateProviding> {
    TRIKVStore *_keyValueStore;
}

+ (id)kvstoreKeyForType:(unsigned char)a0 container:(int)a1 teamId:(id)a2;
+ (id)managerWithKeyValueStore:(id)a0;

- (id)initWithKeyValueStore:(id)a0;
- (id)init;
- (id)lastFetchDateWithType:(unsigned char)a0 container:(int)a1 teamId:(id)a2;
- (void).cxx_destruct;
- (void)setLastFetchDate:(id)a0 type:(unsigned char)a1 container:(int)a2 teamId:(id)a3;

@end
