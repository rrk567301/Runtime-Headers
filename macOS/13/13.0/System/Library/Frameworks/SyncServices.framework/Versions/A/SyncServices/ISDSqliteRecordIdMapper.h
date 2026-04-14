@class ISDRecordIdMapDatabase;

@interface ISDSqliteRecordIdMapper : ISDRecordIdMapper {
    ISDRecordIdMapDatabase *_mapDatabase;
}

+ (id)recordIdMapperInDataDirectory:(id)a0;
+ (id)defaultMapperFileName;
+ (void)setLegacyMode:(BOOL)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)setDirty:(BOOL)a0;
- (void)vacuum;
- (void)resetState;
- (id)verboseDescription;
- (void)enableSqliteTracing:(id)a0;
- (void)disableSqliteTracing;
- (void)disableFlush;
- (void)enableFlush;
- (void)freeOSResources;
- (BOOL)commitMappings;
- (id)allLocalIds;
- (id)allGlobalIds;
- (BOOL)hasMappingForGlobalId:(id)a0;
- (BOOL)hasMappingForLocalId:(id)a0 useConstructedIdMap:(BOOL)a1;
- (id)recordIdMapForLocalId:(id)a0 isCached:(BOOL *)a1;
- (id)recordIdMapForGlobalId:(id)a0 isCached:(BOOL *)a1;
- (void)replaceLocalId:(id)a0 withLocalId:(id)a1;
- (void)replaceGlobalId:(id)a0 withGlobalId:(id)a1;
- (void)removeMappingsForEntityNames:(id)a0 truth:(id)a1;
- (void)removeMappingsForGlobalIds:(id)a0;
- (void)removeMappingForGlobalId:(id)a0;
- (BOOL)removeRecordIdentifierOfUnknownType:(id)a0;
- (id)recordIdentifiersOfUnknownType;
- (BOOL)isRecordIdentifierOfUnknownType:(id)a0;
- (id)initRecordIdMapperInDataDirectory:(id)a0;
- (id)initRecordIdMapperWithPath:(id)a0;
- (BOOL)commitMappings:(BOOL)a0;
- (BOOL)_hasMappingForLocalId:(id)a0;
- (void)flushMappingsIfNowIsAGoodTime;

@end
