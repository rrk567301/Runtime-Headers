@class NTPBCKRecord;

@interface NTPBCKRecordRetrieveResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasRecord;
@property (retain, nonatomic) NTPBCKRecord *record;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
