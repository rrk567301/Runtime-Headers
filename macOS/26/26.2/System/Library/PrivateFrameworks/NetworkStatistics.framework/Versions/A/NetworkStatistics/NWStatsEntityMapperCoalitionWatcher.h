@class NSMutableDictionary;

@interface NWStatsEntityMapperCoalitionWatcher : NWStatsEntityMapper {
    NSMutableDictionary *_uuidCoalitionNameMap;
}

- (void).cxx_destruct;
- (id)init;
- (void)_uuidCoalitionNameMapPrune;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (BOOL)noteUUID:(id)a0 forPid:(int)a1;

@end
