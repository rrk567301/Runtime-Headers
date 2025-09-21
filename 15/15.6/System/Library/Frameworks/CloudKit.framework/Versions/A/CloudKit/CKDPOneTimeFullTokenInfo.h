@class NSData;

@interface CKDPOneTimeFullTokenInfo : PBCodable <NSCopying> {
    struct { unsigned char sharingKeyType : 1; } _has;
}

@property (readonly, nonatomic) char hasSharingKeyBytes;
@property (retain, nonatomic) NSData *sharingKeyBytes;
@property (nonatomic) char hasSharingKeyType;
@property (nonatomic) int sharingKeyType;
@property (readonly, nonatomic) char hasSharingKeySeed;
@property (retain, nonatomic) NSData *sharingKeySeed;

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
