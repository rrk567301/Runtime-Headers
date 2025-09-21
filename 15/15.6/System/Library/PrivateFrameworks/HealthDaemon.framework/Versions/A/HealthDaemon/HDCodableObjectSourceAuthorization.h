@class NSData, HDCodableSyncIdentity;

@interface HDCodableObjectSourceAuthorization : PBCodable <NSCopying> {
    struct { unsigned char authorizationStatus : 1; unsigned char modificationDate : 1; } _has;
}

@property (readonly, nonatomic) char hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (nonatomic) char hasAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) char hasModificationDate;
@property (nonatomic) double modificationDate;
@property (readonly, nonatomic) char hasSessionUUID;
@property (retain, nonatomic) NSData *sessionUUID;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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
