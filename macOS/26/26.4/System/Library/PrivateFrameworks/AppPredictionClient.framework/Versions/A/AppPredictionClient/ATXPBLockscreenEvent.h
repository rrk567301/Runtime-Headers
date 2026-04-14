@class NSString, NSMutableArray;

@interface ATXPBLockscreenEvent : PBCodable <NSCopying> {
    double _date;
    NSString *_blendingCacheId;
    int _eventType;
    NSMutableArray *_suggestionIds;
    struct { unsigned char date : 1; unsigned char eventType : 1; } _has;
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
