@class CKDPDate, CKDPZoneCapabilities, NSString;

@interface CKDPZoneSaveResponse : PBCodable <NSCopying> {
    struct { unsigned char expired : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCapabilities;
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities;
@property (nonatomic) BOOL hasExpired;
@property (nonatomic) BOOL expired;
@property (readonly, nonatomic) BOOL hasExpirationTime;
@property (retain, nonatomic) CKDPDate *expirationTime;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;

- (void)copyTo:(id)a0;
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
