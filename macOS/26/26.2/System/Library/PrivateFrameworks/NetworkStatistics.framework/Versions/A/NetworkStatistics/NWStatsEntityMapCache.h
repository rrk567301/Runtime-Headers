@class NSMutableDictionary;

@interface NWStatsEntityMapCache : NSObject {
    NSMutableDictionary *_uuidMap;
}

@property double hitRetainTime;
@property double missRetainTime;
@property unsigned int capacityLimit;
@property unsigned int pruneSize;

- (id)stateDictionary;
- (void).cxx_destruct;
- (id)description;
- (void)pruneCache;
- (id)init;
- (id)entryForUUID:(id)a0;
- (void)setEntry:(id)a0 forUUID:(id)a1;

@end
