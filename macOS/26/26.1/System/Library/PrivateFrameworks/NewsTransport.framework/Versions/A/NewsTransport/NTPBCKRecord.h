@class NSString, NTPBCKRecordType, NTPBCKRecordIdentifier, NTPBCKDateStatistics, NSMutableArray;

@interface NTPBCKRecord : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (retain, nonatomic) NTPBCKRecordIdentifier *recordIdentifier;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NTPBCKRecordType *type;
@property (readonly, nonatomic) BOOL hasTimeStatistics;
@property (retain, nonatomic) NTPBCKDateStatistics *timeStatistics;
@property (retain, nonatomic) NSMutableArray *fields;

+ (Class)fieldsType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addFields:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearFields;
- (unsigned long long)fieldsCount;
- (void)writeTo:(id)a0;

@end
