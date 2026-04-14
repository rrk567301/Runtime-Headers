@class NSString, NSMutableDictionary;

@interface NWStatsEntityMapperProcessWatcher : NWStatsEntityMapper {
    NSMutableDictionary *_uuidProcessNameMap;
    NSString *_niluuidProcessName;
}

@property (nonatomic) BOOL canonicalizedNames;

- (void).cxx_destruct;
- (id)stateDictionary;
- (id)init;
- (void)_uuidProcessNameMapPrune;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void)noteUUID:(id)a0 forProcessName:(id)a1;

@end
