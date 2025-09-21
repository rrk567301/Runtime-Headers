@class KHDBLockedDictionary;

@interface KHDBUuidMapper : NSObject {
    KHDBLockedDictionary *m_uuidMap;
    char m_forceUuidMapping;
}

- (void)dealloc;
- (id)init;
- (void)clear;
- (id)uuidMap;
- (void)addMappingForUuid:(id)a0 toUuid:(id)a1;
- (id)convertUuid:(id)a0;
- (id)convertUuids:(id)a0;
- (char)forceUuidMapping;
- (void)setForceUuidMapping:(char)a0;
- (id)uuidMapIncludingOldUuids;

@end
