@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBNotificationItemListRecord : PBCodable <NSCopying> {
    struct { unsigned char notificationSource : 1; } _has;
}

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *notificationItemIDs;
@property (nonatomic) char hasNotificationSource;
@property (nonatomic) int notificationSource;
@property (readonly, nonatomic) char hasAlgoID;
@property (retain, nonatomic) NSString *algoID;

+ (Class)notificationItemIDsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addNotificationItemIDs:(id)a0;
- (void)clearNotificationItemIDs;
- (id)notificationItemIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)notificationItemIDsCount;

@end
