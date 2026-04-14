@class PKProtobufCloudStoreZoneInvitation, NSString;

@interface PKProtobufCloudStoreZoneInvitationRequest : PBRequest <NSCopying> {
    struct { unsigned char errorCode : 1; } _has;
}

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasInvitation;
@property (retain, nonatomic) PKProtobufCloudStoreZoneInvitation *invitation;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

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
