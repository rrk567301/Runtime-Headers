@interface AWDCoreRoutinePersistenceMirroringDeviceProfile : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char ageOfDevice : 1; unsigned char deviceClass : 1; unsigned char placesAssociatedToDevice : 1; unsigned char timeIntervalSinceLastRecordAssociation : 1; unsigned char transitionsAssociatedToDevice : 1; unsigned char visitsAssociatedToDevice : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) char hasDeviceClass;
@property (nonatomic) int deviceClass;
@property (nonatomic) char hasAgeOfDevice;
@property (nonatomic) int ageOfDevice;
@property (nonatomic) char hasVisitsAssociatedToDevice;
@property (nonatomic) int visitsAssociatedToDevice;
@property (nonatomic) char hasPlacesAssociatedToDevice;
@property (nonatomic) int placesAssociatedToDevice;
@property (nonatomic) char hasTransitionsAssociatedToDevice;
@property (nonatomic) int transitionsAssociatedToDevice;
@property (nonatomic) char hasTimeIntervalSinceLastRecordAssociation;
@property (nonatomic) int timeIntervalSinceLastRecordAssociation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
