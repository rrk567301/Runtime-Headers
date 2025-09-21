@class PKProtobufCloudStoreZoneInvitation, NSString;

@interface PKProtobufCloudStoreZoneInvitationRequest : PBRequest <NSCopying> {
    struct { unsigned char errorCode : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) char hasInvitation;
@property (retain, nonatomic) PKProtobufCloudStoreZoneInvitation *invitation;
@property (nonatomic) char hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (readonly, nonatomic) char hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
