@interface PTTuningParameters : NSObject

+ (float)noiseScaleFactorForHwModelID:(int)a0 sensorID:(int)a1;
+ (int)hwModelIDFromFigModelSpecificName:(id)a0;
+ (id)hwModelIDToString:(int)a0;

@end
