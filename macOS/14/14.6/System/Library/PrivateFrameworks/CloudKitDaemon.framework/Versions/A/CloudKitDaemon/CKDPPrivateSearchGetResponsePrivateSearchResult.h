@class NSData, CKDPRecordIdentifier;

@interface CKDPPrivateSearchGetResponsePrivateSearchResult : PBCodable <NSCopying> {
    struct { unsigned char layer : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecordId;
@property (retain, nonatomic) CKDPRecordIdentifier *recordId;
@property (nonatomic) BOOL hasLayer;
@property (nonatomic) unsigned int layer;
@property (readonly, nonatomic) BOOL hasRequestedBits;
@property (retain, nonatomic) NSData *requestedBits;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
