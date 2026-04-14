@class NSMutableArray;

@interface ATXPBNotificationDeliveryEvent : PBCodable <NSCopying> {
    struct { unsigned char deliveryUI : 1; } _has;
}

@property (nonatomic) BOOL hasDeliveryUI;
@property (nonatomic) int deliveryUI;
@property (retain, nonatomic) NSMutableArray *suggestionUUIDs;

+ (Class)suggestionUUIDType;

- (void)addSuggestionUUID:(id)a0;
- (void)clearSuggestionUUIDs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)suggestionUUIDsCount;
- (id)deliveryUIAsString:(int)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)StringAsDeliveryUI:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (id)suggestionUUIDAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;

@end
