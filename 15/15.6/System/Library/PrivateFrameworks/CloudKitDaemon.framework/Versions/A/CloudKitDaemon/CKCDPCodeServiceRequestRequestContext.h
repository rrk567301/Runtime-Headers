@class NSString, CKCDPCodeServiceRequestDatabaseOwner, CKCDPCodeServiceRequestOperationGroup;

@interface CKCDPCodeServiceRequestRequestContext : PBCodable <NSCopying> {
    struct { unsigned char dsid : 1; unsigned char databaseEnvironment : 1; unsigned char databaseType : 1; unsigned char internalBuild : 1; } _has;
}

@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) char hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (nonatomic) char hasDatabaseEnvironment;
@property (nonatomic) int databaseEnvironment;
@property (nonatomic) char hasDatabaseType;
@property (nonatomic) int databaseType;
@property (readonly, nonatomic) char hasDeviceId;
@property (retain, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) char hasApplicationBundleId;
@property (retain, nonatomic) NSString *applicationBundleId;
@property (readonly, nonatomic) char hasClientInfo;
@property (retain, nonatomic) NSString *clientInfo;
@property (nonatomic) char hasDsid;
@property (nonatomic) unsigned long long dsid;
@property (readonly, nonatomic) char hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (readonly, nonatomic) char hasOperationGroup;
@property (retain, nonatomic) CKCDPCodeServiceRequestOperationGroup *operationGroup;
@property (readonly, nonatomic) char hasDatabaseOwnerId;
@property (retain, nonatomic) CKCDPCodeServiceRequestDatabaseOwner *databaseOwnerId;
@property (nonatomic) char hasInternalBuild;
@property (nonatomic) char internalBuild;

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
- (int)StringAsDatabaseType:(id)a0;
- (id)databaseTypeAsString:(int)a0;
- (int)StringAsDatabaseEnvironment:(id)a0;
- (id)databaseEnvironmentAsString:(int)a0;

@end
