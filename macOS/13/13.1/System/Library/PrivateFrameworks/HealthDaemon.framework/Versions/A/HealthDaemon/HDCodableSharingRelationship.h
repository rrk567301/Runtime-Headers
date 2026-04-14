@class NSString, NSMutableArray;

@interface HDCodableSharingRelationship : PBCodable <NSCopying> {
    struct { unsigned char dateModified : 1; unsigned char recipientType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRecipientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (nonatomic) BOOL hasRecipientType;
@property (nonatomic) int recipientType;
@property (nonatomic) BOOL hasDateModified;
@property (nonatomic) double dateModified;
@property (retain, nonatomic) NSMutableArray *authorizationIdentifiers;
@property (retain, nonatomic) NSMutableArray *sharingAuthorizations;

+ (Class)sharingAuthorizationsType;
+ (Class)authorizationIdentifiersType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearSharingAuthorizations;
- (void)addSharingAuthorizations:(id)a0;
- (unsigned long long)sharingAuthorizationsCount;
- (id)sharingAuthorizationsAtIndex:(unsigned long long)a0;
- (id)recipientTypeAsString:(int)a0;
- (int)StringAsRecipientType:(id)a0;
- (void)clearAuthorizationIdentifiers;
- (void)addAuthorizationIdentifiers:(id)a0;
- (unsigned long long)authorizationIdentifiersCount;
- (id)authorizationIdentifiersAtIndex:(unsigned long long)a0;

@end
