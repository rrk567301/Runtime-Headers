@interface PLCodec : NSObject

+ (id)HEVCfourCharCode;
+ (id)H264fourCharCode;
+ (unsigned int)_typeCodeFromString:(id)a0;
+ (BOOL)isPlayableFourCharCodecName:(id)a0;

@end
