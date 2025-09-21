@interface VCWiFiUtils : NSObject

+ (char)copyAWDLChannelSequence:(id *)a0 twoPtFourGhzChannelCount:(int *)a1 fiveGhzChannelCount:(int *)a2 dfsChannelCount:(int *)a3 inactiveSlotCount:(int *)a4;
+ (char)copyAWDLChannelSequence:(id *)a0 twoPtFourGhzChannelCount:(int *)a1 fiveGhzChannelCount:(int *)a2 dfsChannelCount:(int *)a3 inactiveSlotCount:(int *)a4 isPresent:(char *)a5;
+ (char)getInfraChannelNumber:(int *)a0 is5Ghz:(char *)a1;
+ (char)getInfraChannelNumber:(int *)a0 is5Ghz:(char *)a1 isPresent:(char *)a2;
+ (char)isWiFiPresent;

@end
