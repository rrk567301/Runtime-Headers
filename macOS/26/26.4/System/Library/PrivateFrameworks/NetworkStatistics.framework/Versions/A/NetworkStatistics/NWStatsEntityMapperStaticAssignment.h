@class NSMutableDictionary;

@interface NWStatsEntityMapperStaticAssignment : NWStatsEntityMapper {
    NSMutableDictionary *_staticUUIDToBundleIDMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;

@end
