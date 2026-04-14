@class NSString, _BlastDoorASCodableShareLocations, _BlastDoorASCodableActivityDataPreview;

@interface _BlastDoorASCodableFinalizeHandshake : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasHandshakeToken;
@property (retain, nonatomic) NSString *handshakeToken;
@property (readonly, nonatomic) BOOL hasInviterShareLocations;
@property (retain, nonatomic) _BlastDoorASCodableShareLocations *inviterShareLocations;
@property (readonly, nonatomic) BOOL hasActivityDataPreview;
@property (retain, nonatomic) _BlastDoorASCodableActivityDataPreview *activityDataPreview;

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
