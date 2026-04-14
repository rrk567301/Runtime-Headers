@class NSString, NSData;

@interface ATXPBHomeScreenWidgetIdentifiable : PBCodable <NSCopying> {
    double _score;
    NSString *_appBundleId;
    NSString *_extensionBundleId;
    NSData *_intent;
    NSString *_predictionSource;
    int _size;
    NSString *_widgetKind;
    NSString *_widgetUniqueId;
    BOOL _onboardingWidget;
    BOOL _suggestedWidget;
    struct { unsigned char score : 1; unsigned char size : 1; unsigned char onboardingWidget : 1; unsigned char suggestedWidget : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
