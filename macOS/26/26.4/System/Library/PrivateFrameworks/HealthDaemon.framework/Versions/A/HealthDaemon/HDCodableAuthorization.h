@class HDCodableSyncIdentity;

@interface HDCodableAuthorization : PBCodable <NSCopying> {
    struct { unsigned char authorizationMode : 1; unsigned char authorizationRequest : 1; unsigned char authorizationStatus : 1; unsigned char modificationDate : 1; unsigned char modificationEpoch : 1; unsigned char objectType : 1; } _has;
}

@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) BOOL hasAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) BOOL hasAuthorizationRequest;
@property (nonatomic) long long authorizationRequest;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) BOOL hasModificationEpoch;
@property (nonatomic) long long modificationEpoch;
@property (nonatomic) BOOL hasAuthorizationMode;
@property (nonatomic) long long authorizationMode;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (long long)_authorizationStatus;
- (id)description;
- (void)writeTo:(id)a0;
- (void)_setModificationDate:(id)a0;
- (void)_setDataTypeCodeWithObjectType:(id)a0;
- (long long)_authorizationMode;
- (long long)_authorizationRequest;
- (long long)_dataTypeCode;
- (id)_modificationDate;
- (void)_setAuthorizationModeWithNumber:(id)a0;
- (void)_setAuthorizationRequestWithNumber:(id)a0;
- (void)_setAuthorizationStatusWithNumber:(id)a0;

@end
