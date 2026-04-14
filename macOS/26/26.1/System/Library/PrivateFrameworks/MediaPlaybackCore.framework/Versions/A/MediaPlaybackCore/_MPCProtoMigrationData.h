@class _MPCProtoMigrationDataTimeSync, NSMutableArray, _MPCProtoDelegateInfo;

@interface _MPCProtoMigrationData : PBCodable <NSCopying> {
    _MPCProtoDelegateInfo *_delegateInfo;
    NSMutableArray *_payloads;
    _MPCProtoMigrationDataTimeSync *_timeSync;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
