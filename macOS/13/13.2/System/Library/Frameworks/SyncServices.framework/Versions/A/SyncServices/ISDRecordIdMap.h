@class NSString;

@interface ISDRecordIdMap : NSObject {
    NSString *_localId;
    NSString *_globalId;
    int _entityNumber;
}

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)entityName;
- (void)setEntityName:(id)a0;
- (id)initWithQuickDirtyCoder:(id)a0;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (int)isd_quickDirtyCoderType;
- (int)entityNumber;
- (id)fastEntityName;
- (void)checkInvariant;
- (id)localId;
- (void)setLocalId:(id)a0;
- (id)globalId;
- (void)setGlobalId:(id)a0;
- (id)fastLocalId;
- (id)fastGlobalId;

@end
