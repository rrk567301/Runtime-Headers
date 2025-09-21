@class NSString, NSData, ATXPBActionCriteria, ATXPBAVRouteInfo, NSMutableArray;

@interface ATXPBAction : PBCodable <NSCopying> {
    struct { unsigned char actionType : 1; unsigned char cachedHash : 1; unsigned char userActivityHash : 1; unsigned char isFutureMedia : 1; } _has;
}

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) char hasActionType;
@property (nonatomic) long long actionType;
@property (readonly, nonatomic) char hasIntent;
@property (retain, nonatomic) NSData *intent;
@property (readonly, nonatomic) char hasHeuristic;
@property (retain, nonatomic) NSString *heuristic;
@property (nonatomic) char hasIsFutureMedia;
@property (nonatomic) char isFutureMedia;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (nonatomic) char hasUserActivityHash;
@property (nonatomic) long long userActivityHash;
@property (readonly, nonatomic) char hasActivityString;
@property (retain, nonatomic) NSString *activityString;
@property (readonly, nonatomic) char hasUserActivityProxy;
@property (retain, nonatomic) NSData *userActivityProxy;
@property (readonly, nonatomic) char hasItemIdentifier;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) char hasContentAttributeSet;
@property (retain, nonatomic) NSData *contentAttributeSet;
@property (readonly, nonatomic) char hasCriteria;
@property (retain, nonatomic) ATXPBActionCriteria *criteria;
@property (readonly, nonatomic) char hasRouteInfo;
@property (retain, nonatomic) ATXPBAVRouteInfo *routeInfo;
@property (retain, nonatomic) NSMutableArray *heuristicMetadatas;
@property (nonatomic) char hasCachedHash;
@property (nonatomic) unsigned long long cachedHash;
@property (retain, nonatomic) NSMutableArray *predictableParameterCombinations;

+ (Class)heuristicMetadataType;
+ (Class)predictableParameterCombinationsType;

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
- (void)addHeuristicMetadata:(id)a0;
- (void)addPredictableParameterCombinations:(id)a0;
- (void)clearHeuristicMetadatas;
- (void)clearPredictableParameterCombinations;
- (id)heuristicMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)heuristicMetadatasCount;
- (id)predictableParameterCombinationsAtIndex:(unsigned long long)a0;
- (unsigned long long)predictableParameterCombinationsCount;

@end
