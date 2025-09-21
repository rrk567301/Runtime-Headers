@class NSString, NSMutableArray;

@interface ATXPBSuggestionLayout : PBCodable <NSCopying> {
    double _layoutScore;
    unsigned long long _numWidgetsInStack;
    NSMutableArray *_fourByEightSuggestions;
    NSMutableArray *_fourByFourSuggestions;
    int _layoutType;
    NSMutableArray *_oneByFourSuggestions;
    NSMutableArray *_oneByOneSuggestions;
    NSMutableArray *_oneByTwoSuggestions;
    NSMutableArray *_twoByFourSuggestions;
    NSMutableArray *_twoByTwoSuggestions;
    NSString *_uuidOfHighestConfidenceSuggestion;
    NSString *_uuidString;
    NSString *_widgetUniqueId;
    BOOL _confidenceWarrantsSnappingOrNPlusOne;
    BOOL _isLowConfidenceStackRotationForStaleStack;
    BOOL _isNPlusOne;
    BOOL _isValidForSuggestionsWidget;
    struct { unsigned char layoutScore : 1; unsigned char numWidgetsInStack : 1; unsigned char layoutType : 1; unsigned char confidenceWarrantsSnappingOrNPlusOne : 1; unsigned char isLowConfidenceStackRotationForStaleStack : 1; unsigned char isNPlusOne : 1; unsigned char isValidForSuggestionsWidget : 1; } _has;
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
