@class NSString, ATXPBHomeScreenEventMetadata, NSMutableArray;

@interface ATXPBHomeScreenEvent : PBCodable <NSCopying> {
    double _date;
    NSString *_appBundleId;
    NSString *_blendingCacheId;
    NSString *_eventTypeString;
    NSString *_intentDescription;
    ATXPBHomeScreenEventMetadata *_metadata;
    NSString *_reason;
    NSString *_stackId;
    int _stackKind;
    int _stackLocation;
    NSMutableArray *_suggestionIds;
    NSString *_widgetBundleId;
    NSString *_widgetKind;
    int _widgetSize;
    NSString *_widgetUniqueId;
    BOOL _isSuggestedWidget;
    struct { unsigned char date : 1; unsigned char stackKind : 1; unsigned char stackLocation : 1; unsigned char widgetSize : 1; unsigned char isSuggestedWidget : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
