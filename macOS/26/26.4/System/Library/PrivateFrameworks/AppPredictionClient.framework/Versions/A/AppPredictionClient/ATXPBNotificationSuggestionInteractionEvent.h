@class NSString;

@interface ATXPBNotificationSuggestionInteractionEvent : PBCodable <NSCopying> {
    double _secondsSinceReferenceDate;
    int _eventType;
    int _suggestionType;
    NSString *_suggestionUUID;
    struct { unsigned char secondsSinceReferenceDate : 1; unsigned char eventType : 1; unsigned char suggestionType : 1; } _has;
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
