@interface AAOVADSensorInfo : AASensorInfo <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int ownVoiceActivityLevel;

- (BOOL)update:(id)a0;
- (void)clearData;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBTAddress:(id)a0;

@end
