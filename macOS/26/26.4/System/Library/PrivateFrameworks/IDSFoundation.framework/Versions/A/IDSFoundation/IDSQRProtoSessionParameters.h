@class NSData, NSString;

@interface IDSQRProtoSessionParameters : PBCodable <NSCopying> {
    struct { unsigned char participantCapabilities : 1; unsigned char webParticipantCapabilities : 1; unsigned char serviceId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasQrAccessToken;
@property (retain, nonatomic) NSData *qrAccessToken;
@property (readonly, nonatomic) BOOL hasSoftwareVersion;
@property (retain, nonatomic) NSString *softwareVersion;
@property (nonatomic) BOOL hasParticipantCapabilities;
@property (nonatomic) unsigned long long participantCapabilities;
@property (nonatomic) BOOL hasWebParticipantCapabilities;
@property (nonatomic) unsigned long long webParticipantCapabilities;
@property (nonatomic) BOOL hasServiceId;
@property (nonatomic) unsigned int serviceId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
