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

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
