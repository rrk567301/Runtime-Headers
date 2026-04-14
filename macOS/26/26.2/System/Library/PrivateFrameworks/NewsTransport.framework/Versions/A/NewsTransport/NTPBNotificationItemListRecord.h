@class NSString, NSMutableArray, NTPBRecordBase;

@interface NTPBNotificationItemListRecord : PBCodable <NSCopying> {
    struct { unsigned char notificationSource : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (retain, nonatomic) NSMutableArray *notificationItemIDs;
@property (nonatomic) BOOL hasNotificationSource;
@property (nonatomic) int notificationSource;
@property (readonly, nonatomic) BOOL hasAlgoID;
@property (retain, nonatomic) NSString *algoID;

+ (Class)notificationItemIDsType;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)addNotificationItemIDs:(id)a0;
- (void)clearNotificationItemIDs;
- (id)notificationItemIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)notificationItemIDsCount;

@end
