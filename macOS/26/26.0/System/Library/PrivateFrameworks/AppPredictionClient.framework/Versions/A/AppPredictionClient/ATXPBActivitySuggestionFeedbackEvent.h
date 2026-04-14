@class ATXPBActivity, NSMutableArray;

@interface ATXPBActivitySuggestionFeedbackEvent : PBCodable <NSCopying> {
    double _date;
    ATXPBActivity *_activity;
    int _eventType;
    int _location;
    NSMutableArray *_serializedAcceptedTriggers;
    int _suggestionType;
    struct { unsigned char date : 1; unsigned char eventType : 1; unsigned char location : 1; unsigned char suggestionType : 1; } _has;
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
