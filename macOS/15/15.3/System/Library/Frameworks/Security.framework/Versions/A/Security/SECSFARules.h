@class SECSFAVersionMatch, NSMutableArray;

@interface SECSFARules : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *eventRules;
@property (readonly, nonatomic) BOOL hasAllowedBuilds;
@property (retain, nonatomic) SECSFAVersionMatch *allowedBuilds;
@property (retain, nonatomic) NSMutableArray *eventFilters;

+ (Class)eventFilterType;
+ (Class)eventRulesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)eventRulesCount;
- (void)addEventFilter:(id)a0;
- (void)clearEventRules;
- (void)addEventRules:(id)a0;
- (void)clearEventFilters;
- (id)eventFilterAtIndex:(unsigned long long)a0;
- (unsigned long long)eventFiltersCount;
- (id)eventRulesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
