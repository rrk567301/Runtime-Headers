@class NSString, NSData, HDCodableSyncIdentity;

@interface HDCodableDevice : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; } _has;
}

@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) char hasModel;
@property (retain, nonatomic) NSString *model;
@property (readonly, nonatomic) char hasHardwareVersion;
@property (retain, nonatomic) NSString *hardwareVersion;
@property (readonly, nonatomic) char hasFirmwareVersion;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) char hasSoftwareVersion;
@property (retain, nonatomic) NSString *softwareVersion;
@property (readonly, nonatomic) char hasLocalIdentifier;
@property (retain, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) char hasFDAUDI;
@property (retain, nonatomic) NSString *fDAUDI;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) char hasCreationDate;
@property (nonatomic) double creationDate;
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
