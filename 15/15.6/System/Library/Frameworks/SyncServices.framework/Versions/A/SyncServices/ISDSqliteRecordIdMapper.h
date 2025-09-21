@class ISDRecordIdMapDatabase;

@interface ISDSqliteRecordIdMapper : ISDRecordIdMapper {
    ISDRecordIdMapDatabase *_mapDatabase;
}

+ (id)defaultMapperFileName;
+ (id)recordIdMapperInDataDirectory:(id)a0;
+ (void)setLegacyMode:(char)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)setDirty:(char)a0;
- (void)vacuum;
- (void)resetState;
- (id)verboseDescription;
- (void)disableSqliteTracing;
- (void)enableSqliteTracing:(id)a0;
- (void)freeOSResources;
- (id)recordIdMapForLocalId:(id)a0 isCached:(char *)a1;
- (char)commitMappings:(char)a0;
- (char)_hasMappingForLocalId:(id)a0;
- (id)allGlobalIds;
- (id)allLocalIds;
- (char)commitMappings;
- (void)disableFlush;
- (void)enableFlush;
- (void)flushMappingsIfNowIsAGoodTime;
- (char)hasMappingForGlobalId:(id)a0;
- (char)hasMappingForLocalId:(id)a0 useConstructedIdMap:(char)a1;
- (id)initRecordIdMapperInDataDirectory:(id)a0;
- (id)initRecordIdMapperWithPath:(id)a0;
- (char)isRecordIdentifierOfUnknownType:(id)a0;
- (id)recordIdMapForGlobalId:(id)a0 isCached:(char *)a1;
- (id)recordIdentifiersOfUnknownType;
- (void)removeMappingForGlobalId:(id)a0;
- (void)removeMappingsForEntityNames:(id)a0 truth:(id)a1;
- (void)removeMappingsForGlobalIds:(id)a0;
- (char)removeRecordIdentifierOfUnknownType:(id)a0;
- (void)replaceGlobalId:(id)a0 withGlobalId:(id)a1;
- (void)replaceLocalId:(id)a0 withLocalId:(id)a1;

@end
