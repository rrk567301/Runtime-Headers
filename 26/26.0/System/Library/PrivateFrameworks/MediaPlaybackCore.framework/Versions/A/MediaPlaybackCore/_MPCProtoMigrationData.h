@class _MPCProtoMigrationDataTimeSync, NSMutableArray, _MPCProtoDelegateInfo;

@interface _MPCProtoMigrationData : PBCodable <NSCopying> {
    _MPCProtoDelegateInfo *_delegateInfo;
    NSMutableArray *_payloads;
    _MPCProtoMigrationDataTimeSync *_timeSync;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
