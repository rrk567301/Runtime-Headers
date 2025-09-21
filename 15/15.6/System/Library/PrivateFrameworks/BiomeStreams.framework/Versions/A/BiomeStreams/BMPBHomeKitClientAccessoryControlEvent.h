@class NSString, BMPBAccessoryState, BMPBHomeKitClientBase, NSMutableArray;

@interface BMPBHomeKitClientAccessoryControlEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBase;
@property (retain, nonatomic) BMPBHomeKitClientBase *base;
@property (readonly, nonatomic) char hasAccessoryUniqueIdentifier;
@property (retain, nonatomic) NSString *accessoryUniqueIdentifier;
@property (readonly, nonatomic) char hasAccessoryState;
@property (retain, nonatomic) BMPBAccessoryState *accessoryState;
@property (readonly, nonatomic) char hasServiceUniqueIdentifier;
@property (retain, nonatomic) NSString *serviceUniqueIdentifier;
@property (readonly, nonatomic) char hasServiceType;
@property (retain, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) char hasCharacteristicType;
@property (retain, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) char hasServiceGroupUniqueIdentifier;
@property (retain, nonatomic) NSString *serviceGroupUniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *zoneUniqueIdentifiers;
@property (readonly, nonatomic) char hasRoomUniqueIdentifier;
@property (retain, nonatomic) NSString *roomUniqueIdentifier;
@property (readonly, nonatomic) char hasAccessoryName;
@property (retain, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) char hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) char hasRoomName;
@property (retain, nonatomic) NSString *roomName;
@property (readonly, nonatomic) char hasServiceGroupName;
@property (retain, nonatomic) NSString *serviceGroupName;
@property (retain, nonatomic) NSMutableArray *zoneNames;
@property (readonly, nonatomic) char hasHomeName;
@property (retain, nonatomic) NSString *homeName;

+ (Class)zoneNamesType;
+ (Class)zoneUniqueIdentifiersType;

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
- (void)addZoneNames:(id)a0;
- (void)clearZoneNames;
- (id)zoneNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneNamesCount;
- (void)addZoneUniqueIdentifiers:(id)a0;
- (void)clearZoneUniqueIdentifiers;
- (id)zoneUniqueIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneUniqueIdentifiersCount;

@end
