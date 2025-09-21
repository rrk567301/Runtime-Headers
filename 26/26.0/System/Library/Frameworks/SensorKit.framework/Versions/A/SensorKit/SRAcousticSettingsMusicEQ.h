@class NSString;

@interface SRAcousticSettingsMusicEQ : NSObject <SRSampling, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isSoundCheckEnabled) BOOL soundCheckEnabled;
@property (readonly, nonatomic, getter=isLateNightModeEnabled) BOOL lateNightModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)initWithSoundCheckEnabled:(BOOL)a0 lateNightModeEnabled:(BOOL)a1;

@end
