@class NSString, NSData;

@interface PKProtobufCloudStoreZoneInvitation : PBCodable <NSCopying> {
    struct { unsigned char dateCreated : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasShareURL;
@property (retain, nonatomic) NSString *shareURL;
@property (readonly, nonatomic) char hasShareInvitationToken;
@property (retain, nonatomic) NSData *shareInvitationToken;
@property (readonly, nonatomic) char hasContainerIdentifier;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) char hasZoneName;
@property (retain, nonatomic) NSString *zoneName;
@property (nonatomic) char hasDateCreated;
@property (nonatomic) double dateCreated;

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
