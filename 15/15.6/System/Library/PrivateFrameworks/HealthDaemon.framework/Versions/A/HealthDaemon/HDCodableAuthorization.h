@class HDCodableSyncIdentity;

@interface HDCodableAuthorization : PBCodable <NSCopying> {
    struct { unsigned char authorizationMode : 1; unsigned char authorizationRequest : 1; unsigned char authorizationStatus : 1; unsigned char modificationDate : 1; unsigned char modificationEpoch : 1; unsigned char objectType : 1; } _has;
}

@property (nonatomic) char hasObjectType;
@property (nonatomic) long long objectType;
@property (nonatomic) char hasAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) char hasAuthorizationRequest;
@property (nonatomic) long long authorizationRequest;
@property (nonatomic) char hasModificationDate;
@property (nonatomic) double modificationDate;
@property (nonatomic) char hasModificationEpoch;
@property (nonatomic) long long modificationEpoch;
@property (nonatomic) char hasAuthorizationMode;
@property (nonatomic) long long authorizationMode;
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
- (long long)_authorizationStatus;
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
