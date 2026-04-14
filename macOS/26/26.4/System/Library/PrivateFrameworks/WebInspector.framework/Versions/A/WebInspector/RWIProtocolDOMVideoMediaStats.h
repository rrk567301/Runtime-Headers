@class NSString, RWIProtocolDOMImmersiveVideoMetadata, RWIProtocolDOMVideoColorSpace;

@interface RWIProtocolDOMVideoMediaStats : RWIProtocolJSONObject

@property (nonatomic) int bitrate;
@property (copy, nonatomic) NSString *codec;
@property (copy, nonatomic) NSString *humanReadableCodecString;
@property (retain, nonatomic) RWIProtocolDOMVideoColorSpace *colorSpace;
@property (nonatomic) double framerate;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (retain, nonatomic) RWIProtocolDOMImmersiveVideoMetadata *immersiveVideoMetadata;
@property (nonatomic) BOOL isProtected;

- (id)initWithBitrate:(int)a0 codec:(id)a1 humanReadableCodecString:(id)a2 colorSpace:(id)a3 framerate:(double)a4 height:(int)a5 width:(int)a6;

@end
