@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowWelcomeStepContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *heroImages;

+ (Class)heroImagesType;

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
- (void)clearHeroImages;
- (unsigned long long)heroImagesCount;
- (void)addHeroImages:(id)a0;
- (id)heroImagesAtIndex:(unsigned long long)a0;

@end
