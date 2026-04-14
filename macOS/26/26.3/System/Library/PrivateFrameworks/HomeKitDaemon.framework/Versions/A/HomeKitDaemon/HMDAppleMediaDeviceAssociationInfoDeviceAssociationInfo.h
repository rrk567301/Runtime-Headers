@class NSString;

@interface HMDAppleMediaDeviceAssociationInfoDeviceAssociationInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAccessoryUUID;
@property (retain, nonatomic) NSString *accessoryUUID;
@property (readonly, nonatomic) BOOL hasIdsIdentifier;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) BOOL hasIdsDestination;
@property (retain, nonatomic) NSString *idsDestination;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
