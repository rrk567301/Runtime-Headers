@class NSMutableArray;

@interface SIRINLUINTERNALPLAN_GENERATIONPlanGenerationResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *plans;
@property (retain, nonatomic) NSMutableArray *mappings;

+ (Class)mappingsType;
+ (Class)plansType;

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
- (void)addMappings:(id)a0;
- (void)clearMappings;
- (id)mappingsAtIndex:(unsigned long long)a0;
- (unsigned long long)mappingsCount;
- (void)addPlans:(id)a0;
- (void)clearPlans;
- (id)plansAtIndex:(unsigned long long)a0;
- (unsigned long long)plansCount;

@end
