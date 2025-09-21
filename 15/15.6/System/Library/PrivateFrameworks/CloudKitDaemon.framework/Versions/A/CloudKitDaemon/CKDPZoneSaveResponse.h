@class CKDPDate, CKDPZoneCapabilities, NSString;

@interface CKDPZoneSaveResponse : PBCodable <NSCopying> {
    struct { unsigned char expired : 1; } _has;
}

@property (readonly, nonatomic) char hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;
@property (nonatomic) char hasExpired;
@property (nonatomic) char expired;
@property (readonly, nonatomic) char hasExpirationTime;
@property (retain, nonatomic) CKDPDate *expirationTime;
@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString *etag;

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
