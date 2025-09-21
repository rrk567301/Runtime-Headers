@class CBFloatArray, NSArray, NSString, NSObject, CBFloatArray2D;
@protocol OS_os_log;

@interface CBChromaticCorrectionParams : NSObject <CBChromaticCorectionParamsProtocol> {
    NSObject<OS_os_log> *_log;
    unsigned long long _luxTableSizeOG;
    float *_luxTableOG;
    unsigned long long _nitsTableSizeOG;
    float *_nitsTableOG;
    unsigned long long _strengthTableSizeOG;
    float *_strengthTableOG;
    float _rampUpdateRateOG;
    float *_rampBezierAnchorsOG;
}

@property (readonly) CBFloatArray *luxTable;
@property (readonly) CBFloatArray *nitsTable;
@property (readonly) CBFloatArray2D *strengthTable;
@property (readonly) NSArray *rampBezierAnchors;
@property (readonly) float luxActivationThreshold;
@property (readonly) float nitsActivationThreshold;
@property (readonly) float rampUpdateRate;
@property (readonly) float rampUpDuration;
@property (readonly) float rampUpLuxDeltaThreshold;
@property (readonly) float rampDownDuration;
@property (readonly) float rampDownLuxDeltaThreshold;
@property (readonly) float aodRampDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (float)getStrengthForRow:(unsigned long long)a0 andColumn:(unsigned long long)a1;
- (BOOL)initBezierWithPrefix:(id)a0 fromParser:(id)a1;
- (BOOL)initCommonWithPrefix:(id)a0 fromParser:(id)a1;
- (id)initFromAmmoliteFromParser:(id)a0;
- (id)initFromParser:(id)a0 withName:(id)a1 andPrefix:(id)a2;
- (BOOL)initFromParserOG:(id)a0 withName:(id)a1 andPrefix:(id)a2;
- (BOOL)initTablesWithPrefix:(id)a0 fromParser:(id)a1;

@end
