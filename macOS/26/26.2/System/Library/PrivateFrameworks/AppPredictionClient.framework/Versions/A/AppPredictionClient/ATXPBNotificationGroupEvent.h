@class NSString;

@interface ATXPBNotificationGroupEvent : PBCodable <NSCopying> {
    double _secondsSinceReferenceDate;
    int _eventType;
    NSString *_uuid;
    struct { unsigned char secondsSinceReferenceDate : 1; unsigned char eventType : 1; } _has;
}

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;

@end
