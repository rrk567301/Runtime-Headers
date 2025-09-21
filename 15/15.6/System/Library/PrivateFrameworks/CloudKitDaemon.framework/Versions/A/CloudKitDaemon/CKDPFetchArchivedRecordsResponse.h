@class NSData, NSMutableArray;

@interface CKDPFetchArchivedRecordsResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) char hasArchiveContinuationToken;
@property (retain, nonatomic) NSData *archiveContinuationToken;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;

+ (Class)recordType;

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
- (void)addRecord:(id)a0;
- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (void)clearRecords;
- (unsigned long long)recordsCount;
- (id)recordAtIndex:(unsigned long long)a0;

@end
