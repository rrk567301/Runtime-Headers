@class CBIORegistryParser, NSString, CBRTPLCParams, NSObject;
@protocol OS_os_log;

@interface CBBacklightNode : NSObject <CBPrimitiveConfigurationProvider, CBBacklightConfigurationProvider> {
    NSObject<OS_os_log> *_log;
    CBIORegistryParser *_parser;
}

@property (readonly) CBRTPLCParams *rtplc;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithService:(unsigned int)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)dealloc;
- (id)initWithParser:(id)a0;
- (id)copyAABCapDictionary;
- (id)copyAABConstraintDictionary;
- (id)copyMarketingTable;
- (id)copyRestrictionDictionary;
- (id)copyRestrictionDictionaryMultiPoint;
- (id)copyRestrictionDictionarySinglePoint;
- (id)copyTrueToneStrength;
- (unsigned int *)createMultipointArrayCommon:(id)a0 unitSize:(unsigned long long *)a1 outputCount:(unsigned long long *)a2;
- (int)createMultipointRestrictionArrayForThresholdsName:(id)a0 andFactorsName:(id)a1 andThresholds:(id *)a2 andFactors:(id *)a3;
- (BOOL)getBacklightCalibration:(struct CBBacklightCalibration_s { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; } *)a0;
- (BOOL)getGlobalScalarDisplayI:(float *)a0 andB:(float *)a1;
- (BOOL)getGlobalScalarTo:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; } *)a0;
- (id)newMultiPointFactorsArray:(id)a0;
- (id)newMultiPointThresholdsArray:(id)a0;

@end
