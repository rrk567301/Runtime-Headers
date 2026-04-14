@class NSString;

@interface ATXPBNotificationGroupEvent : PBCodable <NSCopying> {
    double _secondsSinceReferenceDate;
    int _eventType;
    NSString *_uuid;
    struct { unsigned char secondsSinceReferenceDate : 1; unsigned char eventType : 1; } _has;
}

- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
