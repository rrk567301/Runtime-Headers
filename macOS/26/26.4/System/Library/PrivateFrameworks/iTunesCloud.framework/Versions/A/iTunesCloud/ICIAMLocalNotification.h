@class NSString;

@interface ICIAMLocalNotification : PBCodable <NSCopying> {
    struct { unsigned char date : 1; unsigned char interval : 1; unsigned char trigger : 1; } _has;
}

@property (nonatomic) BOOL hasTrigger;
@property (nonatomic) int trigger;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;
@property (nonatomic) BOOL hasInterval;
@property (nonatomic) double interval;
@property (readonly, nonatomic) BOOL hasNotification;
@property (retain, nonatomic) NSString *notification;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (int)StringAsTrigger:(id)a0;
- (id)triggerAsString:(int)a0;

@end
