@class NSString, NSMutableArray, ATXPBCGRectWrapper;

@interface ATXPBHomeScreenEventMetadata : PBCodable <NSCopying> {
    unsigned long long _pageIndex;
    NSMutableArray *_bundleIds;
    NSString *_engagedUrl;
    NSMutableArray *_stackIds;
    int _suggestedPageType;
    ATXPBCGRectWrapper *_visibleRect;
    NSMutableArray *_widgetIdentifiables;
    NSMutableArray *_widgetInStackIdentifiables;
    char _isStalenessRotation;
    char _isSuggestionInAddWidgetSheet;
    char _isWidgetInTodayView;
    struct { unsigned char pageIndex : 1; unsigned char suggestedPageType : 1; unsigned char isStalenessRotation : 1; unsigned char isSuggestionInAddWidgetSheet : 1; unsigned char isWidgetInTodayView : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
