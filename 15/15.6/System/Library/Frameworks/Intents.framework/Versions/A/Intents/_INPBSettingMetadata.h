@class NSString, _INPBAppIdentifier, _INPBDevice;

@interface _INPBSettingMetadata : PBCodable <_INPBSettingMetadata, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *settingId;
@property (readonly, nonatomic) char hasSettingId;
@property (retain, nonatomic) _INPBAppIdentifier *targetApp;
@property (readonly, nonatomic) char hasTargetApp;
@property (retain, nonatomic) _INPBDevice *targetDevice;
@property (readonly, nonatomic) char hasTargetDevice;
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

@end
