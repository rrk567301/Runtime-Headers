@class NSDictionary;

@interface SGMIWarningsConfig : NSObject

@property (readonly) NSDictionary *detectors;
@property (readonly, nonatomic) float bodyAnalysisSamplingFactor;

+ (id)defaultConfig;

- (id)description;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)initWithAssetAttachmentDictionary:(id)a0 recipientDictionary:(id)a1 followUpDictionary:(id)a2 bodyAnalysisSamplingFactor:(float)a3;
- (BOOL)shouldAnalyzeBody;

@end
