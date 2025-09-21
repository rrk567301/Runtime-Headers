@class NSString;

@interface ATXMPBBlendingWidgetRotationEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char engagementType : 1; unsigned char selectionType : 1; unsigned char stackLocation : 1; } _has;
}

@property (readonly, nonatomic) char hasLayoutType;
@property (retain, nonatomic) NSString *layoutType;
@property (nonatomic) char hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) char hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) char hasWidgetIdentifier;
@property (retain, nonatomic) NSString *widgetIdentifier;
@property (nonatomic) char hasSelectionType;
@property (nonatomic) int selectionType;
@property (readonly, nonatomic) char hasHighestConfidenceCategory;
@property (retain, nonatomic) NSString *highestConfidenceCategory;
@property (readonly, nonatomic) char hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (readonly, nonatomic) char hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (nonatomic) char hasStackLocation;
@property (nonatomic) int stackLocation;
@property (readonly, nonatomic) char hasClientModelABGroup;
@property (retain, nonatomic) NSString *clientModelABGroup;

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
- (int)StringAsSelectionType:(id)a0;
- (id)selectionTypeAsString:(int)a0;
- (int)StringAsEngagementType:(id)a0;
- (id)engagementTypeAsString:(int)a0;
- (int)StringAsStackLocation:(id)a0;
- (id)stackLocationAsString:(int)a0;

@end
