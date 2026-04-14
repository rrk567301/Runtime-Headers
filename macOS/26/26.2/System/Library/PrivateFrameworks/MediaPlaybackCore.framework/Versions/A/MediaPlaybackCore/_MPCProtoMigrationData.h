@class _MPCProtoMigrationDataTimeSync, NSMutableArray, _MPCProtoDelegateInfo;

@interface _MPCProtoMigrationData : PBCodable <NSCopying> {
    _MPCProtoDelegateInfo *_delegateInfo;
    NSMutableArray *_payloads;
    _MPCProtoMigrationDataTimeSync *_timeSync;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
