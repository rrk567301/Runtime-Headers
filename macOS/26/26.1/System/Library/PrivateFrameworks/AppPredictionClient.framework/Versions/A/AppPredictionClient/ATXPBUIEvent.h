@class NSString, NSData;

@interface ATXPBUIEvent : PBCodable <NSCopying> {
    NSString *_consumerSubType;
    NSData *_event;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
