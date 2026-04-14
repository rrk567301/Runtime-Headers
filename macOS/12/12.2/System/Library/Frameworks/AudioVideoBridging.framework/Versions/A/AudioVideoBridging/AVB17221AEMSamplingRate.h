@interface AVB17221AEMSamplingRate : AVB17221AEMObject <NSCopying>

@property (readonly, nonatomic) double frequency;
@property (nonatomic) unsigned char iidcVideoFrameRate;
@property unsigned int samplingRate;
@property unsigned char pull;
@property unsigned int baseFrequency;

+ (id)keyPathsForValuesAffectingPull;
+ (id)keyPathsForValuesAffectingBaseFrequency;
+ (id)_IIDCStandardFrameRates;
+ (id)_IIDCNTSCDownFrameRates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (double)frequency;
- (id)plistRepresentation;
- (unsigned char)pull;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;
- (unsigned int)baseFrequency;
- (BOOL)isSupportedAudioSamplingRate;
- (void)setPull:(unsigned char)a0;
- (void)setBaseFrequency:(unsigned int)a0;
- (void)setIidcVideoFrameRate:(unsigned char)a0;
- (unsigned char)iidcVideoFrameRate;
- (BOOL)isSupportedVideoSamplingRate;

@end
