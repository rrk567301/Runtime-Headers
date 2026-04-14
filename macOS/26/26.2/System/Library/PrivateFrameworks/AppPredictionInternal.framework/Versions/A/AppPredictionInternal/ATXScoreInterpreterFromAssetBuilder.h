@interface ATXScoreInterpreterFromAssetBuilder : NSObject

+ (id)scoreInterpretersForAllSubTypes;
+ (id)scoreInterpreterForConsumerSubType:(unsigned char)a0;
+ (id)interpreterFromAssetFilename:(id)a0;
+ (id)assetFilenameForSubType:(unsigned char)a0;

@end
