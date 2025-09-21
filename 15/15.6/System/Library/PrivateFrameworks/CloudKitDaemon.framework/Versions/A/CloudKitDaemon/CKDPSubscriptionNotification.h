@class CKDPSubscriptionNotificationAlert, NSMutableArray, NSString;

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {
    struct { unsigned char shouldBadge : 1; unsigned char shouldSendContentAvailable : 1; unsigned char shouldSendMutableContent : 1; } _has;
}

@property (readonly, nonatomic) char hasAlert;
@property (retain, nonatomic) CKDPSubscriptionNotificationAlert *alert;
@property (nonatomic) char hasShouldBadge;
@property (nonatomic) char shouldBadge;
@property (retain, nonatomic) NSMutableArray *additionalFields;
@property (nonatomic) char hasShouldSendContentAvailable;
@property (nonatomic) char shouldSendContentAvailable;
@property (nonatomic) char hasShouldSendMutableContent;
@property (nonatomic) char shouldSendMutableContent;
@property (readonly, nonatomic) char hasCollapseIdKey;
@property (retain, nonatomic) NSString *collapseIdKey;

+ (Class)additionalFieldsType;

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
- (void)addAdditionalFields:(id)a0;
- (id)additionalFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)additionalFieldsCount;
- (void)clearAdditionalFields;

@end
