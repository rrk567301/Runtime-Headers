@class NSString;

@interface HMDAppleMediaDeviceAssociationInfoDeviceAssociationInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAccessoryUUID;
@property (retain, nonatomic) NSString *accessoryUUID;
@property (readonly, nonatomic) BOOL hasIdsIdentifier;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) BOOL hasIdsDestination;
@property (retain, nonatomic) NSString *idsDestination;

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
