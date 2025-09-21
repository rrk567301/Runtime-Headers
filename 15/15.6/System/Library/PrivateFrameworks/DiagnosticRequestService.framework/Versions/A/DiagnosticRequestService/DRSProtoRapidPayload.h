@class NSData, DRSProtoClientDeviceMetadata, DRSProtoFileDescription, DRSProtoRequestDescription;

@interface DRSProtoRapidPayload : PBCodable <NSCopying> {
    struct { unsigned char uploadAttempts : 1; } _has;
}

@property (readonly, nonatomic) char hasDeviceMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *deviceMetadata;
@property (readonly, nonatomic) char hasPayloadMetadata;
@property (retain, nonatomic) DRSProtoRequestDescription *payloadMetadata;
@property (readonly, nonatomic) char hasPayloadDescription;
@property (retain, nonatomic) DRSProtoFileDescription *payloadDescription;
@property (nonatomic) char hasUploadAttempts;
@property (nonatomic) unsigned int uploadAttempts;
@property (readonly, nonatomic) char hasPayload;
@property (retain, nonatomic) NSData *payload;

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
