@class NTPBSmarterFetchResponse, NTPBCKRecord;

@interface NTPBTypedMessage : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasSmarterFetchResponse;
@property (retain, nonatomic) NTPBSmarterFetchResponse *smarterFetchResponse;
@property (readonly, nonatomic) BOOL hasCkRecord;
@property (retain, nonatomic) NTPBCKRecord *ckRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
