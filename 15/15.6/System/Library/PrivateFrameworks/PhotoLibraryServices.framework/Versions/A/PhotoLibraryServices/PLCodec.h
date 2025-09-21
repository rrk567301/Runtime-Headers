@interface PLCodec : NSObject

+ (id)H264fourCharCode;
+ (id)HEVCfourCharCode;
+ (unsigned int)_typeCodeFromString:(id)a0;
+ (char)isPlayableFourCharCodecName:(id)a0;

@end
