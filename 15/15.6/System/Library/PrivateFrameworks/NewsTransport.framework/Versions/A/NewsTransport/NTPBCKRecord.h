@class NSString, NTPBCKRecordType, NTPBCKRecordIdentifier, NTPBCKDateStatistics, NSMutableArray;

@interface NTPBCKRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) char hasRecordIdentifier;
@property (retain, nonatomic) NTPBCKRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) char hasType;
@property (retain, nonatomic) NTPBCKRecordType *type;
@property (readonly, nonatomic) char hasTimeStatistics;
@property (retain, nonatomic) NTPBCKDateStatistics *timeStatistics;
@property (retain, nonatomic) NSMutableArray *fields;

+ (Class)fieldsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFields:(id)a0;
- (void)clearFields;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldsCount;

@end
