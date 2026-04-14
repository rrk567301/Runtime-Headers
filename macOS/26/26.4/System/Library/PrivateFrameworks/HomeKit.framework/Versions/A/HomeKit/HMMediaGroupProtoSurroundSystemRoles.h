@class NSString;

@interface HMMediaGroupProtoSurroundSystemRoles : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFrontLeftDestinationIdentifier;
@property (retain, nonatomic) NSString *frontLeftDestinationIdentifier;
@property (readonly, nonatomic) BOOL hasFrontRightDestinationIdentifier;
@property (retain, nonatomic) NSString *frontRightDestinationIdentifier;
@property (readonly, nonatomic) BOOL hasRearLeftDestinationIdentifier;
@property (retain, nonatomic) NSString *rearLeftDestinationIdentifier;
@property (readonly, nonatomic) BOOL hasRearRightDestinationIdentifier;
@property (retain, nonatomic) NSString *rearRightDestinationIdentifier;

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
