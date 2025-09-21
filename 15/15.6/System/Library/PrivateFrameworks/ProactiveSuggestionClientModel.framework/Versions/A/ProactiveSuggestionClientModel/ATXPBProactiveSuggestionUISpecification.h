@class NSString, NSMutableArray;

@interface ATXPBProactiveSuggestionUISpecification : PBCodable <NSCopying> {
    double _contextEndDate;
    double _contextStartDate;
    unsigned long long _predictionReasons;
    NSMutableArray *_preferredLayoutConfigs;
    NSString *_reason;
    NSString *_subtitle;
    NSString *_title;
    char _allowedOnHomeScreen;
    char _allowedOnLockscreen;
    char _allowedOnSpotlight;
    char _shouldClearOnEngagement;
    struct { unsigned char contextEndDate : 1; unsigned char contextStartDate : 1; unsigned char predictionReasons : 1; unsigned char allowedOnHomeScreen : 1; unsigned char allowedOnLockscreen : 1; unsigned char allowedOnSpotlight : 1; unsigned char shouldClearOnEngagement : 1; } _has;
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
