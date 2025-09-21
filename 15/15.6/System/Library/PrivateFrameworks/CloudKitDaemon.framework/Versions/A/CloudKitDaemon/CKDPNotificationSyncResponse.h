@class NSData, NSMutableArray;

@interface CKDPNotificationSyncResponse : PBCodable <NSCopying> {
    struct { unsigned char moreAvailable : 1; } _has;
}

@property (readonly, nonatomic) char hasChangeID;
@property (retain, nonatomic) NSData *changeID;
@property (retain, nonatomic) NSMutableArray *pushMessages;
@property (nonatomic) char hasMoreAvailable;
@property (nonatomic) char moreAvailable;

+ (Class)pushMessageType;

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
- (void)addPushMessage:(id)a0;
- (void)clearPushMessages;
- (id)pushMessageAtIndex:(unsigned long long)a0;
- (unsigned long long)pushMessagesCount;

@end
