@class NSString, NSMutableArray, HDCodableSyncIdentity;

@interface HDCodableSharingRelationship : PBCodable <NSCopying> {
    struct { unsigned char dateModified : 1; unsigned char recipientType : 1; } _has;
}

@property (readonly, nonatomic) char hasRecipientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (nonatomic) char hasRecipientType;
@property (nonatomic) int recipientType;
@property (nonatomic) char hasDateModified;
@property (nonatomic) double dateModified;
@property (retain, nonatomic) NSMutableArray *authorizationIdentifiers;
@property (retain, nonatomic) NSMutableArray *sharingAuthorizations;
@property (readonly, nonatomic) char hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

+ (Class)authorizationIdentifiersType;
+ (Class)sharingAuthorizationsType;

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
- (int)StringAsRecipientType:(id)a0;
- (void)addAuthorizationIdentifiers:(id)a0;
- (void)addSharingAuthorizations:(id)a0;
- (id)authorizationIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)authorizationIdentifiersCount;
- (void)clearAuthorizationIdentifiers;
- (void)clearSharingAuthorizations;
- (id)recipientTypeAsString:(int)a0;
- (id)sharingAuthorizationsAtIndex:(unsigned long long)a0;
- (unsigned long long)sharingAuthorizationsCount;

@end
