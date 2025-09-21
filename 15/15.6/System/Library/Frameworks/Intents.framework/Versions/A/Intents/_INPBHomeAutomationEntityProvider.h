@class NSArray, NSString, _INPBString;

@interface _INPBHomeAutomationEntityProvider : PBCodable <_INPBHomeAutomationEntityProvider, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *accessoryNames;
@property (readonly, nonatomic) unsigned long long accessoryNamesCount;
@property (retain, nonatomic) _INPBString *destinationDeviceId;
@property (readonly, nonatomic) char hasDestinationDeviceId;
@property (retain, nonatomic) _INPBString *homeName;
@property (readonly, nonatomic) char hasHomeName;
@property (retain, nonatomic) _INPBString *intentDeviceQuantifier;
@property (readonly, nonatomic) char hasIntentDeviceQuantifier;
@property (retain, nonatomic) _INPBString *intentDeviceType;
@property (readonly, nonatomic) char hasIntentDeviceType;
@property (copy, nonatomic) NSArray *intentFromEntities;
@property (readonly, nonatomic) unsigned long long intentFromEntitiesCount;
@property (retain, nonatomic) _INPBString *intentPlaceHint;
@property (readonly, nonatomic) char hasIntentPlaceHint;
@property (retain, nonatomic) _INPBString *intentReference;
@property (readonly, nonatomic) char hasIntentReference;
@property (copy, nonatomic) NSArray *roomNames;
@property (readonly, nonatomic) unsigned long long roomNamesCount;
@property (copy, nonatomic) NSArray *serviceGroups;
@property (readonly, nonatomic) unsigned long long serviceGroupsCount;
@property (copy, nonatomic) NSArray *serviceNames;
@property (readonly, nonatomic) unsigned long long serviceNamesCount;
@property (copy, nonatomic) NSArray *zoneNames;
@property (readonly, nonatomic) unsigned long long zoneNamesCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)accessoryNamesType;
+ (Class)intentFromEntitiesType;
+ (Class)roomNamesType;
+ (Class)serviceGroupsType;
+ (Class)serviceNamesType;
+ (Class)zoneNamesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)accessoryNamesAtIndex:(unsigned long long)a0;
- (void)addAccessoryNames:(id)a0;
- (void)addIntentFromEntities:(id)a0;
- (void)addRoomNames:(id)a0;
- (void)addServiceGroups:(id)a0;
- (void)addServiceNames:(id)a0;
- (void)addZoneNames:(id)a0;
- (void)clearAccessoryNames;
- (void)clearIntentFromEntities;
- (void)clearRoomNames;
- (void)clearServiceGroups;
- (void)clearServiceNames;
- (void)clearZoneNames;
- (id)intentFromEntitiesAtIndex:(unsigned long long)a0;
- (id)roomNamesAtIndex:(unsigned long long)a0;
- (id)serviceGroupsAtIndex:(unsigned long long)a0;
- (id)serviceNamesAtIndex:(unsigned long long)a0;
- (id)zoneNamesAtIndex:(unsigned long long)a0;

@end
