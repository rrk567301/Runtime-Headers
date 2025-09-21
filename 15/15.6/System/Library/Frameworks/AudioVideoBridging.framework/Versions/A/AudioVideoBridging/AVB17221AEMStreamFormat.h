@class AVB17221AEMSamplingRate;

@interface AVB17221AEMStreamFormat : AVB17221AEMObject <NSCopying>

@property (readonly, nonatomic) char isAudioFormat;
@property (readonly, nonatomic) char isVideoFormat;
@property (readonly, nonatomic) char isSupportedAudioFormat;
@property (readonly, nonatomic) char isSupportedVideoFormat;
@property (readonly, nonatomic) char isSMPTEFormat;
@property (readonly, nonatomic) char isMIDIFormat;
@property (readonly, nonatomic) char isControlFormat;
@property (readonly, nonatomic) char isClockFormat;
@property (copy, nonatomic) AVB17221AEMSamplingRate *samplingRate;
@property (copy, nonatomic) AVB17221AEMSamplingRate *packetRate;
@property (readonly, nonatomic) char isSupportedFormat;
@property unsigned long long streamFormat;
@property char version;

+ (id)keyPathsForValuesAffectingIsAudioFormat;
+ (id)keyPathsForValuesAffectingIsClockFormat;
+ (id)keyPathsForValuesAffectingIsControlFormat;
+ (id)keyPathsForValuesAffectingIsMIDIFormat;
+ (id)keyPathsForValuesAffectingIsSMPTEFormat;
+ (id)keyPathsForValuesAffectingIsSupportedAudioFormat;
+ (id)keyPathsForValuesAffectingIsSupportedFormat;
+ (id)keyPathsForValuesAffectingIsVideoFormat;
+ (id)keyPathsForValuesAffectingSamplingRate;
+ (id)keyPathsForValuesAffectingVendorFormat;
+ (id)streamFormatWithFormat:(unsigned long long)a0;
+ (id)streamFormatWithPlistRepresentation:(id)a0;
+ (id)streamFormatWithXMLRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)version;
- (void)setVersion:(char)a0;
- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (unsigned short)numberOfAudioChannels;
- (char)isControlFormat;
- (long long)compareStreamFormat:(id)a0;
- (id)debugLogStringWithIndentation:(id)a0;
- (id)formatsByExpandingFormat;
- (char)isAudioFormat;
- (char)isCompatibleAsListenerForFormat:(id)a0;
- (char)isCompatibleWithFormat:(id)a0;
- (char)isMIDIFormat;
- (char)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (char)isPotentiallyCompatibleWithFormat:(id)a0;
- (char)isSMPTEFormat;
- (char)isSupportedAudioFormat;
- (char)isSupportedVideoFormat;
- (char)isValidForSamplingRate:(id)a0;
- (char)isVideoFormat;
- (unsigned short)maximumIntervalFrames;
- (unsigned short)maximumIntervalFramesPerIntervalPeriod:(unsigned int)a0;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (id)plistRepresentationForDiagnostics:(char)a0;
- (void)setVendorFormat:(char)a0;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;
- (char)updateWithPlistEntry:(id)a0;
- (char)updateWithXML:(id)a0;
- (char)vendorFormat;
- (id)xmlRepresentation;

@end
