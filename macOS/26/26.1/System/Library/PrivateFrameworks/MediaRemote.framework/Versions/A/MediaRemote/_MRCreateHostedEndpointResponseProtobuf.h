@class NSString;

@interface _MRCreateHostedEndpointResponseProtobuf : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGroupUID;
@property (retain, nonatomic) NSString *groupUID;

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
