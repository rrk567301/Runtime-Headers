@class NSData, NSString;

@interface IDSQRProtoSessionParameters : PBCodable <NSCopying> {
    struct { unsigned char participantCapabilities : 1; unsigned char webParticipantCapabilities : 1; unsigned char serviceId : 1; } _has;
}

@property (readonly, nonatomic) char hasQrAccessToken;
@property (retain, nonatomic) NSData *qrAccessToken;
@property (readonly, nonatomic) char hasSoftwareVersion;
@property (retain, nonatomic) NSString *softwareVersion;
@property (nonatomic) char hasParticipantCapabilities;
@property (nonatomic) unsigned long long participantCapabilities;
@property (nonatomic) char hasWebParticipantCapabilities;
@property (nonatomic) unsigned long long webParticipantCapabilities;
@property (nonatomic) char hasServiceId;
@property (nonatomic) unsigned int serviceId;

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
