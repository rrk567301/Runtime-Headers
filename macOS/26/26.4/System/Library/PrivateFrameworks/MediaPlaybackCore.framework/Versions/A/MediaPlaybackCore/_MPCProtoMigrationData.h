@class _MPCProtoMigrationDataTimeSync, NSMutableArray, _MPCProtoDelegateInfo;

@interface _MPCProtoMigrationData : PBCodable <NSCopying> {
    _MPCProtoDelegateInfo *_delegateInfo;
    NSMutableArray *_payloads;
    _MPCProtoMigrationDataTimeSync *_timeSync;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
