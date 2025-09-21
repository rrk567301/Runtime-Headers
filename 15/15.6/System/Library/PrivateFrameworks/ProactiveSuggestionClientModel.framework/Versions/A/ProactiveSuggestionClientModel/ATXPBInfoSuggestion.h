@class NSString, NSData;

@interface ATXPBInfoSuggestion : PBCodable <NSCopying> {
    struct { unsigned char confidenceLevel : 1; unsigned char endDate : 1; unsigned char layouts : 1; unsigned char relevanceScore : 1; unsigned char startDate : 1; } _has;
}

@property (readonly, nonatomic) char hasAppBundleIdentifier;
@property (retain, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) char hasWidgetBundleIdentifier;
@property (retain, nonatomic) NSString *widgetBundleIdentifier;
@property (readonly, nonatomic) char hasWidgetKind;
@property (retain, nonatomic) NSString *widgetKind;
@property (nonatomic) char hasLayouts;
@property (nonatomic) long long layouts;
@property (readonly, nonatomic) char hasSuggestionIdentifier;
@property (retain, nonatomic) NSString *suggestionIdentifier;
@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) char hasArchivedIntent;
@property (retain, nonatomic) NSData *archivedIntent;
@property (readonly, nonatomic) char hasArchivedMetadata;
@property (retain, nonatomic) NSData *archivedMetadata;
@property (readonly, nonatomic) char hasSourceIdentifier;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) char hasConfidenceLevel;
@property (nonatomic) long long confidenceLevel;
@property (nonatomic) char hasRelevanceScore;
@property (nonatomic) double relevanceScore;
@property (nonatomic) char hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) char hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) char hasCriterion;
@property (retain, nonatomic) NSString *criterion;
@property (readonly, nonatomic) char hasArchivedIntentDescription;
@property (retain, nonatomic) NSData *archivedIntentDescription;

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
