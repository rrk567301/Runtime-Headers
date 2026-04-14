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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
