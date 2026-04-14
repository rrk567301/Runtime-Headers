@class AVB17221AEMSamplingRate;

@interface AVB17221AEMStreamFormat : AVB17221AEMObject <NSCopying>

@property (readonly, nonatomic) BOOL isAudioFormat;
@property (readonly, nonatomic) BOOL isVideoFormat;
@property (readonly, nonatomic) BOOL isSupportedAudioFormat;
@property (readonly, nonatomic) BOOL isSupportedVideoFormat;
@property (readonly, nonatomic) BOOL isSMPTEFormat;
@property (readonly, nonatomic) BOOL isMIDIFormat;
@property (readonly, nonatomic) BOOL isControlFormat;
@property (readonly, nonatomic) BOOL isClockFormat;
@property (copy, nonatomic) AVB17221AEMSamplingRate *samplingRate;
@property unsigned long long streamFormat;
@property BOOL version;

+ (id)streamFormatWithFormat:(unsigned long long)a0;
+ (id)streamFormatWithXMLRepresentation:(id)a0;
+ (id)keyPathsForValuesAffectingVendorFormat;
+ (id)keyPathsForValuesAffectingIsSupportedAudioFormat;
+ (id)keyPathsForValuesAffectingIsSupportedFormat;
+ (id)keyPathsForValuesAffectingIsAudioFormat;
+ (id)keyPathsForValuesAffectingIsVideoFormat;
+ (id)keyPathsForValuesAffectingIsSMPTEFormat;
+ (id)keyPathsForValuesAffectingIsMIDIFormat;
+ (id)keyPathsForValuesAffectingIsControlFormat;
+ (id)keyPathsForValuesAffectingIsClockFormat;
+ (id)keyPathsForValuesAffectingSamplingRate;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)version;
- (void)setVersion:(BOOL)a0;
- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (unsigned short)numberOfAudioChannels;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)a0;
- (BOOL)updateWithXML:(id)a0;
- (id)xmlRepresentation;
- (id)debugLogStringWithIndentation:(id)a0;
- (void)setVendorFormat:(BOOL)a0;
- (BOOL)vendorFormat;
- (BOOL)isSupportedAudioFormat;
- (BOOL)isSupportedVideoFormat;
- (BOOL)isAudioFormat;
- (BOOL)isVideoFormat;
- (BOOL)isSMPTEFormat;
- (BOOL)isMIDIFormat;
- (BOOL)isControlFormat;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (unsigned short)maximumIntervalFrames;
- (BOOL)isCompatibleWithFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleWithFormat:(id)a0;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;

@end
