@class NSString;

@interface ICIAMImpressionNode : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasImpressionType;
@property (retain, nonatomic) NSString *impressionType;
@property (readonly, nonatomic) char hasRecoAlgoId;
@property (retain, nonatomic) NSString *recoAlgoId;

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
