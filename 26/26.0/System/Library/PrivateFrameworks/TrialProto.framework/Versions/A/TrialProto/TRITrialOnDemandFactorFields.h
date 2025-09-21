@class NSString;

@interface TRITrialOnDemandFactorFields : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFactorName;
@property (retain, nonatomic) NSString *factorName;
@property (readonly, nonatomic) BOOL hasNamespaceName;
@property (retain, nonatomic) NSString *namespaceName;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
