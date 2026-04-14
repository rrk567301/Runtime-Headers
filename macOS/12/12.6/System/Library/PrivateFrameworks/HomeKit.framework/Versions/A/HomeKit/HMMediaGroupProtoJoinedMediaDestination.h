@class HMMediaGroupProtoMediaDestination, HMMediaGroupProtoMediaGroupData;

@interface HMMediaGroupProtoJoinedMediaDestination : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMediaDestination;
@property (retain, nonatomic) HMMediaGroupProtoMediaDestination *mediaDestination;
@property (readonly, nonatomic) BOOL hasGroup;
@property (retain, nonatomic) HMMediaGroupProtoMediaGroupData *group;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;

@end
