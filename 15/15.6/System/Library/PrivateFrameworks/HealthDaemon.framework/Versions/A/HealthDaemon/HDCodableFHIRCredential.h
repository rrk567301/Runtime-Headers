@class NSString, HDCodableMessageVersion, NSData, HDCodableSyncIdentity;

@interface HDCodableFHIRCredential : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; unsigned char receivedDate : 1; unsigned char deleted : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSData *identifier;
@property (readonly, nonatomic) char hasAccountSyncIdentifier;
@property (retain, nonatomic) NSData *accountSyncIdentifier;
@property (readonly, nonatomic) char hasScopeString;
@property (retain, nonatomic) NSString *scopeString;
@property (readonly, nonatomic) char hasRequestedScopeString;
@property (retain, nonatomic) NSString *requestedScopeString;
@property (readonly, nonatomic) char hasPatientID;
@property (retain, nonatomic) NSString *patientID;
@property (nonatomic) char hasReceivedDate;
@property (nonatomic) double receivedDate;
@property (nonatomic) char hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (nonatomic) char hasDeleted;
@property (nonatomic) char deleted;
@property (readonly, nonatomic) char hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
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
