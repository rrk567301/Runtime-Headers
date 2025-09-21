@class NSString, NSMutableArray, ATXAnchorModelPBAnchorMetadata;

@interface ATXAnchorModelPBAnchorModelLogEntry : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (readonly, nonatomic) char hasAnchor;
@property (retain, nonatomic) ATXAnchorModelPBAnchorMetadata *anchor;
@property (retain, nonatomic) NSMutableArray *positiveAppLaunches;
@property (retain, nonatomic) NSMutableArray *positiveActions;
@property (retain, nonatomic) NSMutableArray *negativeAppLaunches;
@property (retain, nonatomic) NSMutableArray *negativeActions;

+ (Class)negativeActionsType;
+ (Class)negativeAppLaunchesType;
+ (Class)positiveActionsType;
+ (Class)positiveAppLaunchesType;

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
- (void)addNegativeActions:(id)a0;
- (void)addNegativeAppLaunches:(id)a0;
- (void)addPositiveActions:(id)a0;
- (void)addPositiveAppLaunches:(id)a0;
- (void)clearNegativeActions;
- (void)clearNegativeAppLaunches;
- (void)clearPositiveActions;
- (void)clearPositiveAppLaunches;
- (id)negativeActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)negativeActionsCount;
- (id)negativeAppLaunchesAtIndex:(unsigned long long)a0;
- (unsigned long long)negativeAppLaunchesCount;
- (id)positiveActionsAtIndex:(unsigned long long)a0;
- (unsigned long long)positiveActionsCount;
- (id)positiveAppLaunchesAtIndex:(unsigned long long)a0;
- (unsigned long long)positiveAppLaunchesCount;

@end
