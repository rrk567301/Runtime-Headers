@class NSString;

@interface ICIAMLocalNotification : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char interval : 1; unsigned char trigger : 1; } _has;
}

@property (nonatomic) char hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) char hasDate;
@property (nonatomic) double date;
@property (nonatomic) char hasInterval;
@property (nonatomic) double interval;
@property (readonly, nonatomic) char hasNotification;
@property (retain, nonatomic) NSString *notification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTrigger:(id)a0;
- (id)triggerAsString:(int)a0;

@end
