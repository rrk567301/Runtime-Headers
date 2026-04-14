@class NSMutableArray;

@interface IDSQRProtoMaterial : PBCodable <NSCopying>

@property (nonatomic) unsigned long long ownerParticipantId;
@property (nonatomic) unsigned long long receiverParticipantId;
@property (retain, nonatomic) NSMutableArray *materialInfos;

+ (Class)materialInfoType;

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
- (void)addMaterialInfo:(id)a0;
- (void)clearMaterialInfos;
- (id)materialInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)materialInfosCount;

@end
