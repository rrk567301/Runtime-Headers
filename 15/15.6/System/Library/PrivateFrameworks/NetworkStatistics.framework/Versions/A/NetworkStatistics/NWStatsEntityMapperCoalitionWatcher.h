@class NSMutableDictionary;

@interface NWStatsEntityMapperCoalitionWatcher : NWStatsEntityMapper {
    NSMutableDictionary *_uuidCoalitionNameMap;
}

- (id)init;
- (void).cxx_destruct;
- (void)_uuidCoalitionNameMapPrune;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (char)noteUUID:(id)a0 forPid:(int)a1;

@end
