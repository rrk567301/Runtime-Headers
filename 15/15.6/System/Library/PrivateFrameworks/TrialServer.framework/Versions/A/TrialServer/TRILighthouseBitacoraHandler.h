@interface TRILighthouseBitacoraHandler : NSObject

+ (char)donateTrialIdentifiers:(id)a0 eventType:(unsigned char)a1 succeeded:(char)a2 error:(id *)a3;
+ (char)emitBMLTEventWithBMLTId:(id)a0 deploymentId:(int)a1 eventType:(unsigned char)a2 succeeded:(char)a3;
+ (char)emitShadowEvaluationEventWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2 eventType:(unsigned char)a3 succeeded:(char)a4;

@end
