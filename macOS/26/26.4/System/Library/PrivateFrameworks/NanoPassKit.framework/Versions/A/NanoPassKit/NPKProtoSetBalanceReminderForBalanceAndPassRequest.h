@class NSString, NSData;

@interface NPKProtoSetBalanceReminderForBalanceAndPassRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL hasBalanceBytes;
@property (retain, nonatomic) NSData *balanceBytes;
@property (readonly, nonatomic) BOOL hasBalanceReminderBytes;
@property (retain, nonatomic) NSData *balanceReminderBytes;

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

@end
