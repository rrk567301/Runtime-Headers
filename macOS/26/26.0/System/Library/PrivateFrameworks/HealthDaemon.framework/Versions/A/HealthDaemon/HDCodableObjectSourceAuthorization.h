@class NSData, HDCodableSyncIdentity;

@interface HDCodableObjectSourceAuthorization : PBCodable <NSCopying> {
    struct { unsigned char authorizationStatus : 1; unsigned char modificationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (nonatomic) BOOL hasAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSData *sessionUUID;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

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
