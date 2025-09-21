@class NSString;

@interface ATXPBNotificationSuggestionInteractionEvent : PBCodable <NSCopying> {
    double _secondsSinceReferenceDate;
    int _eventType;
    int _suggestionType;
    NSString *_suggestionUUID;
    struct { unsigned char secondsSinceReferenceDate : 1; unsigned char eventType : 1; unsigned char suggestionType : 1; } _has;
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
