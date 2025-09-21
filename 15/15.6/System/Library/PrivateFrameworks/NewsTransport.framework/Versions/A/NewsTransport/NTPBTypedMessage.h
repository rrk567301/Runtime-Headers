@class NTPBSmarterFetchResponse, NTPBCKRecord;

@interface NTPBTypedMessage : PBCodable <NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (nonatomic) char hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) char hasSmarterFetchResponse;
@property (retain, nonatomic) NTPBSmarterFetchResponse *smarterFetchResponse;
@property (readonly, nonatomic) char hasCkRecord;
@property (retain, nonatomic) NTPBCKRecord *ckRecord;

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
