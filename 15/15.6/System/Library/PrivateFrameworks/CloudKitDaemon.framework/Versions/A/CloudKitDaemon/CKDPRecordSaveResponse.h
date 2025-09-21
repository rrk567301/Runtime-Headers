@class NSString, CKDPDateStatistics, CKDPDate, CKDPRecord;

@interface CKDPRecordSaveResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) char hasTimeStatistics;
@property (retain, nonatomic) CKDPDateStatistics *timeStatistics;
@property (readonly, nonatomic) char hasServerFields;
@property (retain, nonatomic) CKDPRecord *serverFields;
@property (readonly, nonatomic) char hasExpirationTime;
@property (retain, nonatomic) CKDPDate *expirationTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
