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

- (void)clearFields;
- (id)dictionaryRepresentation;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldsCount;
- (void)addFields:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
