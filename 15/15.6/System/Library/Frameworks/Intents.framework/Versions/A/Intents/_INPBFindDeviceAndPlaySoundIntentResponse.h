@class NSArray, NSString;

@interface _INPBFindDeviceAndPlaySoundIntentResponse : PBCodable <_INPBFindDeviceAndPlaySoundIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *devicesFounds;
@property (readonly, nonatomic) unsigned long long devicesFoundsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)devicesFoundType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDevicesFound:(id)a0;
- (void)clearDevicesFounds;
- (id)devicesFoundAtIndex:(unsigned long long)a0;

@end
