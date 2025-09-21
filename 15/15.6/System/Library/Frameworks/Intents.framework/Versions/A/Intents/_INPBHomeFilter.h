@class _INPBDataString, NSArray, NSString;

@interface _INPBHomeFilter : PBCodable <_INPBHomeFilter, NSSecureCoding, NSCopying> {
    struct { unsigned char deviceType : 1; unsigned char entityType : 1; unsigned char hasAllQuantifier : 1; unsigned char isExcludeFilter : 1; unsigned char outerDeviceType : 1; unsigned char serviceType : 1; unsigned char subServiceType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *accessory;
@property (readonly, nonatomic) char hasAccessory;
@property (nonatomic) int deviceType;
@property (nonatomic) char hasDeviceType;
@property (copy, nonatomic) NSArray *entityIdentifiers;
@property (readonly, nonatomic) unsigned long long entityIdentifiersCount;
@property (retain, nonatomic) _INPBDataString *entityName;
@property (readonly, nonatomic) char hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) char hasEntityType;
@property (retain, nonatomic) _INPBDataString *group;
@property (readonly, nonatomic) char hasGroup;
@property (nonatomic) char hasAllQuantifier;
@property (nonatomic) char hasHasAllQuantifier;
@property (retain, nonatomic) _INPBDataString *home;
@property (readonly, nonatomic) char hasHome;
@property (nonatomic) char isExcludeFilter;
@property (nonatomic) char hasIsExcludeFilter;
@property (retain, nonatomic) _INPBDataString *outerDeviceName;
@property (readonly, nonatomic) char hasOuterDeviceName;
@property (nonatomic) int outerDeviceType;
@property (nonatomic) char hasOuterDeviceType;
@property (retain, nonatomic) _INPBDataString *room;
@property (readonly, nonatomic) char hasRoom;
@property (retain, nonatomic) _INPBDataString *scene;
@property (readonly, nonatomic) char hasScene;
@property (retain, nonatomic) _INPBDataString *service;
@property (readonly, nonatomic) char hasService;
@property (nonatomic) int serviceType;
@property (nonatomic) char hasServiceType;
@property (nonatomic) int subServiceType;
@property (nonatomic) char hasSubServiceType;
@property (retain, nonatomic) _INPBDataString *zone;
@property (readonly, nonatomic) char hasZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsServiceType:(id)a0;
- (id)serviceTypeAsString:(int)a0;
- (int)StringAsEntityType:(id)a0;
- (int)StringAsSubServiceType:(id)a0;
- (int)StringAsDeviceType:(id)a0;
- (int)StringAsOuterDeviceType:(id)a0;
- (void)addEntityIdentifiers:(id)a0;
- (void)clearEntityIdentifiers;
- (id)deviceTypeAsString:(int)a0;
- (id)entityIdentifiersAtIndex:(unsigned long long)a0;
- (id)entityTypeAsString:(int)a0;
- (id)outerDeviceTypeAsString:(int)a0;
- (id)subServiceTypeAsString:(int)a0;

@end
