@class NSData, NSMutableArray;

@interface ATXPBERMEvent : PBCodable <NSCopying> {
    double _dateEngaged;
    unsigned long long _engagementType;
    double _eventDate;
    NSMutableArray *_clientModelIds;
    int _eventType;
    NSData *_executable;
    int _executableType;
    struct { unsigned char dateEngaged : 1; unsigned char engagementType : 1; unsigned char eventDate : 1; unsigned char eventType : 1; unsigned char executableType : 1; } _has;
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
