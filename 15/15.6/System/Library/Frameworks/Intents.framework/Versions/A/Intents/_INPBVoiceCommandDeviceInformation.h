@class NSString;

@interface _INPBVoiceCommandDeviceInformation : PBCodable <_INPBVoiceCommandDeviceInformation, NSSecureCoding, NSCopying> {
    struct { unsigned char deviceIdiom : 1; unsigned char isHomePodInUltimateMode : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int deviceIdiom;
@property (nonatomic) char hasDeviceIdiom;
@property (nonatomic) char isHomePodInUltimateMode;
@property (nonatomic) char hasIsHomePodInUltimateMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDeviceIdiom:(id)a0;
- (id)deviceIdiomAsString:(int)a0;

@end
