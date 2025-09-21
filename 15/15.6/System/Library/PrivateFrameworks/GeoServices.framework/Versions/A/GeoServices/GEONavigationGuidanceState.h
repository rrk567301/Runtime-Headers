@interface GEONavigationGuidanceState : PBCodable <NSCopying> {
    int _guidanceLevelIgnoringTimeCriterion;
    int _guidanceLevel;
    int _navigationState;
    int _navigationType;
    int _trackedTransportType;
    char _shouldSuppressCellularDataAlerts;
    struct { unsigned char has_guidanceLevelIgnoringTimeCriterion : 1; unsigned char has_guidanceLevel : 1; unsigned char has_navigationState : 1; unsigned char has_navigationType : 1; unsigned char has_trackedTransportType : 1; unsigned char has_shouldSuppressCellularDataAlerts : 1; } _flags;
}

@property (nonatomic) char hasTrackedTransportType;
@property (nonatomic) int trackedTransportType;
@property (nonatomic) char hasNavigationState;
@property (nonatomic) int navigationState;
@property (nonatomic) char hasGuidanceLevel;
@property (nonatomic) int guidanceLevel;
@property (nonatomic) char hasShouldSuppressCellularDataAlerts;
@property (nonatomic) char shouldSuppressCellularDataAlerts;
@property (nonatomic) char hasGuidanceLevelIgnoringTimeCriterion;
@property (nonatomic) int guidanceLevelIgnoringTimeCriterion;
@property (nonatomic) char hasNavigationType;
@property (nonatomic) int navigationType;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsGuidanceLevelIgnoringTimeCriterion:(id)a0;
- (int)StringAsNavigationState:(id)a0;
- (int)StringAsNavigationType:(id)a0;
- (int)StringAsGuidanceLevel:(id)a0;
- (int)StringAsTrackedTransportType:(id)a0;
- (id)guidanceLevelAsString:(int)a0;
- (id)guidanceLevelIgnoringTimeCriterionAsString:(int)a0;
- (id)initWithGuidanceLevel:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithTransportType:(int)a0;
- (id)jsonRepresentation;
- (id)navigationStateAsString:(int)a0;
- (id)navigationTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)trackedTransportTypeAsString:(int)a0;

@end
