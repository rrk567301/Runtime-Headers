@class SECSFAVersionMatch, NSMutableArray;

@interface SECSFARules : PBCodable <NSCopying> {
    struct { unsigned char configVersion : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *eventRules;
@property (readonly, nonatomic) BOOL hasAllowedBuilds;
@property (retain, nonatomic) SECSFAVersionMatch *allowedBuilds;
@property (retain, nonatomic) NSMutableArray *eventFilters;
@property (nonatomic) BOOL hasConfigVersion;
@property (nonatomic) int configVersion;

+ (Class)eventFilterType;
+ (Class)eventRulesType;

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
- (unsigned long long)eventRulesCount;
- (int)StringAsConfigVersion:(id)a0;
- (void)addEventFilter:(id)a0;
- (void)clearEventRules;
- (void)addEventRules:(id)a0;
- (void)clearEventFilters;
- (id)configVersionAsString:(int)a0;
- (id)eventFilterAtIndex:(unsigned long long)a0;
- (unsigned long long)eventFiltersCount;
- (id)eventRulesAtIndex:(unsigned long long)a0;

@end
