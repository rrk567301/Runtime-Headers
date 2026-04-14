@interface AVB17221AEMSVFStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned char headerVersion;
@property unsigned char format;
@property unsigned char map;
@property unsigned char sample;
@property unsigned char frame;
@property unsigned char frameRate;

+ (id)keyPathsForValuesAffectingFrame;
+ (id)keyPathsForValuesAffectingFormat;
+ (id)keyPathsForValuesAffectingFrameRate;
+ (id)keyPathsForValuesAffectingHeaderVersion;
+ (id)keyPathsForValuesAffectingMap;
+ (id)keyPathsForValuesAffectingSample;

- (id)init;
- (BOOL)isSupportedFormat;
- (BOOL)isVideoFormat;

@end
