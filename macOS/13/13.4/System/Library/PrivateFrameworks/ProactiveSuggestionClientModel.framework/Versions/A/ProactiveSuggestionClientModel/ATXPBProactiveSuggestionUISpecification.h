@class NSString, NSMutableArray;

@interface ATXPBProactiveSuggestionUISpecification : PBCodable <NSCopying> {
    struct { unsigned char predictionReasons : 1; unsigned char allowedOnHomeScreen : 1; unsigned char allowedOnLockscreen : 1; unsigned char allowedOnSpotlight : 1; unsigned char shouldClearOnEngagement : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasReason;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSMutableArray *preferredLayoutConfigs;
@property (nonatomic) BOOL hasAllowedOnLockscreen;
@property (nonatomic) BOOL allowedOnLockscreen;
@property (nonatomic) BOOL hasAllowedOnHomeScreen;
@property (nonatomic) BOOL allowedOnHomeScreen;
@property (nonatomic) BOOL hasAllowedOnSpotlight;
@property (nonatomic) BOOL allowedOnSpotlight;
@property (nonatomic) BOOL hasShouldClearOnEngagement;
@property (nonatomic) BOOL shouldClearOnEngagement;
@property (nonatomic) BOOL hasPredictionReasons;
@property (nonatomic) unsigned long long predictionReasons;

+ (Class)preferredLayoutConfigsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPreferredLayoutConfigs:(id)a0;
- (void)clearPreferredLayoutConfigs;
- (id)preferredLayoutConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)preferredLayoutConfigsCount;

@end
