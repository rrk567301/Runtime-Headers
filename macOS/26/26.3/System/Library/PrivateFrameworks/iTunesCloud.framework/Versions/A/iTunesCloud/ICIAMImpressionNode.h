@class NSString;

@interface ICIAMImpressionNode : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasImpressionType;
@property (retain, nonatomic) NSString *impressionType;
@property (readonly, nonatomic) BOOL hasRecoAlgoId;
@property (retain, nonatomic) NSString *recoAlgoId;

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

@end
