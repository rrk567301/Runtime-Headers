@class _INPBDataString, _INPBContact, NSString;

@interface _INPBDeviceDetail : PBCodable <_INPBDeviceDetail, NSSecureCoding, NSCopying> {
    struct { unsigned char deviceClass : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *category;
@property (readonly, nonatomic) char hasCategory;
@property (nonatomic) int deviceClass;
@property (nonatomic) char hasDeviceClass;
@property (retain, nonatomic) _INPBDataString *deviceName;
@property (readonly, nonatomic) char hasDeviceName;
@property (retain, nonatomic) _INPBContact *deviceOwner;
@property (readonly, nonatomic) char hasDeviceOwner;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) _INPBDataString *productName;
@property (readonly, nonatomic) char hasProductName;
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
- (int)StringAsDeviceClass:(id)a0;
- (id)deviceClassAsString:(int)a0;

@end
