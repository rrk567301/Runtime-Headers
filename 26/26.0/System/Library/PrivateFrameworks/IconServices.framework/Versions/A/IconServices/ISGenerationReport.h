@interface ISGenerationReport : NSObject

@property (readonly) unsigned long long iconTreatment;
@property (readonly) BOOL hasLightingEffects;
@property (readonly) unsigned short customRenderedTag;

+ (id)generationReportWithCustomRenderedTag:(unsigned short)a0;

- (id)initWithIconTreatment:(unsigned long long)a0 hasLightingEffects:(BOOL)a1;

@end
