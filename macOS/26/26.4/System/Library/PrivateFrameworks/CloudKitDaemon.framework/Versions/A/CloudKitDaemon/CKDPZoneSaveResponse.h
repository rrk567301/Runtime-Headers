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
@property (readonly, nonatomic) BOOL hasLocalExpirationTime;
@property (retain, nonatomic) CKDPDate *localExpirationTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
