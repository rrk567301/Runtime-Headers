@interface ATXMPBAppLaunchOverallCaptureRateTracker : PBCodable <NSCopying> {
    struct { unsigned char captureType : 1; unsigned char iconLocation : 1; unsigned char appLibraryEnabled : 1; unsigned char appPredictionPanelEnabled : 1; unsigned char appPredictionPanelTodayEnabled : 1; unsigned char spotlightEnabled : 1; unsigned char suggestionsWidgetEnabled : 1; unsigned char suggestionsWidgetTodayEnabled : 1; } _has;
}

@property (nonatomic) char hasCaptureType;
@property (nonatomic) int captureType;
@property (nonatomic) char hasIconLocation;
@property (nonatomic) int iconLocation;
@property (nonatomic) char hasSpotlightEnabled;
@property (nonatomic) char spotlightEnabled;
@property (nonatomic) char hasAppLibraryEnabled;
@property (nonatomic) char appLibraryEnabled;
@property (nonatomic) char hasAppPredictionPanelEnabled;
@property (nonatomic) char appPredictionPanelEnabled;
@property (nonatomic) char hasAppPredictionPanelTodayEnabled;
@property (nonatomic) char appPredictionPanelTodayEnabled;
@property (nonatomic) char hasSuggestionsWidgetEnabled;
@property (nonatomic) char suggestionsWidgetEnabled;
@property (nonatomic) char hasSuggestionsWidgetTodayEnabled;
@property (nonatomic) char suggestionsWidgetTodayEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsIconLocation:(id)a0;
- (int)StringAsCaptureType:(id)a0;
- (id)captureTypeAsString:(int)a0;
- (id)iconLocationAsString:(int)a0;

@end
