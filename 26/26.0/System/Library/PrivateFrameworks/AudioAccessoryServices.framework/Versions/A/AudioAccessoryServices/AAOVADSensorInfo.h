@interface AAOVADSensorInfo : AASensorInfo <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int ownVoiceActivityLevel;

- (void)clearData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)update:(id)a0;
- (id)initWithBTAddress:(id)a0;

@end
