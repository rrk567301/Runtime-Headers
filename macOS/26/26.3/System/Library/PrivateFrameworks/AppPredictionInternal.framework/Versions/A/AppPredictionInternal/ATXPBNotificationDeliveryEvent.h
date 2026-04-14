@class NSMutableArray;

@interface ATXPBNotificationDeliveryEvent : PBCodable <NSCopying> {
    struct { unsigned char deliveryUI : 1; } _has;
}

@property (nonatomic) BOOL hasDeliveryUI;
@property (nonatomic) int deliveryUI;
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs;

+ (Class)suggestionUUIDType;

- (id)dictionaryRepresentation;
- (void)addSuggestionUUID:(id)a0;
- (id)description;
- (int)StringAsDeliveryUI:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearSuggestionUUIDs;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)suggestionUUIDAtIndex:(unsigned long long)a0;
- (id)deliveryUIAsString:(int)a0;
- (unsigned long long)suggestionUUIDsCount;

@end
