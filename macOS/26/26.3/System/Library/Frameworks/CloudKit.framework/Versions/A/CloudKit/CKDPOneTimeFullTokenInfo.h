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

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
