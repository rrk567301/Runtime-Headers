@class NSString, CKDPShareMetadata, CKDPZone, NSMutableArray, CKDPRecord;

@interface CKDPRecordResolveTokenResponse : PBCodable <NSCopying> {
    struct { unsigned char containerEnvironment : 1; } _has;
}

@property (readonly, nonatomic) char hasContainer;
@property (retain, nonatomic) NSString *container;
@property (nonatomic) char hasContainerEnvironment;
@property (nonatomic) int containerEnvironment;
@property (retain, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) char hasShareRecord;
@property (retain, nonatomic) CKDPRecord *shareRecord;
@property (readonly, nonatomic) char hasShareMetadata;
@property (retain, nonatomic) CKDPShareMetadata *shareMetadata;
@property (readonly, nonatomic) char hasRecordZone;
@property (retain, nonatomic) CKDPZone *recordZone;

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
- (void)clearRecords;
- (unsigned long long)recordsCount;
- (int)StringAsContainerEnvironment:(id)a0;
- (id)containerEnvironmentAsString:(int)a0;
- (id)recordAtIndex:(unsigned long long)a0;

@end
