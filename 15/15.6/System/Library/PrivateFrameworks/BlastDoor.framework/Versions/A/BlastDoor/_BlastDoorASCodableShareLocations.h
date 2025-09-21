@class NSString;

@interface _BlastDoorASCodableShareLocations : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasActivityShareURL;
@property (retain, nonatomic) NSString *activityShareURL;
@property (readonly, nonatomic) char hasRelationshipShareURL;
@property (retain, nonatomic) NSString *relationshipShareURL;

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
