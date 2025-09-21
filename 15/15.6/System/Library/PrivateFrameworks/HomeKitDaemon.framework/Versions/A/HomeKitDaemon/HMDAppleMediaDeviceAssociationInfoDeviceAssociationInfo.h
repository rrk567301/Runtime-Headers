@class NSString;

@interface HMDAppleMediaDeviceAssociationInfoDeviceAssociationInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasAccessoryUUID;
@property (retain, nonatomic) NSString *accessoryUUID;
@property (readonly, nonatomic) char hasIdsIdentifier;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) char hasIdsDestination;
@property (retain, nonatomic) NSString *idsDestination;

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
