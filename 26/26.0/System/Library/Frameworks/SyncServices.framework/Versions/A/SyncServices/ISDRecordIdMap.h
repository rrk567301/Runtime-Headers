@class NSString;

@interface ISDRecordIdMap : NSObject {
    NSString *_localId;
    NSString *_globalId;
    int _entityNumber;
}

- (void)dealloc;
- (id)entityName;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)setEntityName:(id)a0;
- (id)localId;
- (void)checkInvariant;
- (void)encodeWithQuickDirtyCoder:(id)a0;
- (int)entityNumber;
- (id)fastEntityName;
- (id)fastGlobalId;
- (id)fastLocalId;
- (id)globalId;
- (id)initWithQuickDirtyCoder:(id)a0;
- (int)isd_quickDirtyCoderType;
- (void)setGlobalId:(id)a0;
- (void)setLocalId:(id)a0;

@end
