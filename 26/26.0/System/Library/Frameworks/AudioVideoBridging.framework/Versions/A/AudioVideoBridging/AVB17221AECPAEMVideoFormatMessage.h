@class AVB17221AEMVideoFormatSpecific, AVB17221AEMVideoAspectRatio, AVB17221AEMVideoSize;

@interface AVB17221AECPAEMVideoFormatMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) AVB17221AEMVideoFormatSpecific *formatSpecific;
@property (copy, nonatomic) AVB17221AEMVideoAspectRatio *aspectRatio;
@property (nonatomic) unsigned short colorSpace;
@property (nonatomic) AVB17221AEMVideoSize *frameSize;

+ (id)keyPathsForValuesAffectingAspectRatio;
+ (id)keyPathsForValuesAffectingColorSpace;
+ (id)keyPathsForValuesAffectingFormatSpecific;
+ (id)keyPathsForValuesAffectingFrameSize;

- (void)setAspectRatio:(id)a0;
- (void)setColorSpace:(unsigned short)a0;
- (unsigned short)colorSpace;
- (id)aspectRatio;
- (id)frameSize;
- (void)setFrameSize:(id)a0;
- (id)formatSpecific;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setFormatSpecific:(id)a0;

@end
