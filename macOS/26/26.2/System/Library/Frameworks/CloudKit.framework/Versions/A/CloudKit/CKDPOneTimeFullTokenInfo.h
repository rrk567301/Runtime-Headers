@class NSData;

@interface CKDPOneTimeFullTokenInfo : PBCodable <NSCopying> {
    struct { unsigned char sharingKeyType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSharingKeyBytes;
@property (retain, nonatomic) NSData *sharingKeyBytes;
@property (nonatomic) BOOL hasSharingKeyType;
@property (nonatomic) int sharingKeyType;
@property (readonly, nonatomic) BOOL hasSharingKeySeed;
@property (retain, nonatomic) NSData *sharingKeySeed;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
