@interface ATXTimelineRelevancePBTimelineRelevanceStackConfigSummary : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char nonSmartStacksWithWidget : 1; unsigned char smartStacksWithWidget : 1; unsigned char standaloneWidgets : 1; unsigned char widgetsWithUnknownStackKind : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) long long timestamp;
@property (nonatomic) char hasSmartStacksWithWidget;
@property (nonatomic) int smartStacksWithWidget;
@property (nonatomic) char hasNonSmartStacksWithWidget;
@property (nonatomic) int nonSmartStacksWithWidget;
@property (nonatomic) char hasStandaloneWidgets;
@property (nonatomic) int standaloneWidgets;
@property (nonatomic) char hasWidgetsWithUnknownStackKind;
@property (nonatomic) int widgetsWithUnknownStackKind;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
