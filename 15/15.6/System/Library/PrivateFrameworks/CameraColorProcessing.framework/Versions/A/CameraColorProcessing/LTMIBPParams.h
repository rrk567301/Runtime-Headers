@class NSDictionary, NSArray, NSString;
@protocol MTLTexture;

@interface LTMIBPParams : NSObject <LTMIBPParams>

@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (nonatomic) char doAdaptiveFaceBiasScaler;
@property (nonatomic) char doHazeEstimation;
@property (nonatomic) char doGlobalCCM;
@property (nonatomic) char computeHDRCurves;
@property (nonatomic) char computeCurvesWoFaceBoost;
@property (nonatomic) char enableAntiAliasing;
@property (nonatomic) char isHighlightCompressionEnabled;
@property (nonatomic) char isAdaptiveHighlightCompressionEnabled;
@property (retain, nonatomic) NSDictionary *validBufferRect;
@property (nonatomic) int optimizationLevel;
@property (nonatomic) char calcGlobalHistOnROI;
@property (nonatomic) char digitalFlash;
@property (nonatomic) char isSIFR;
@property (nonatomic) float ispDGainThreshold;
@property (nonatomic) float adaptiveHCSlope;
@property (retain, nonatomic) NSArray *hazeEstimation;
@property (nonatomic) float evmExpRatio;
@property (retain, nonatomic) NSDictionary *inMetaData;
@property (retain, nonatomic) id<MTLTexture> inRGBImageUInt16Tex;
@property (retain, nonatomic) id<MTLTexture> inLumaTex;
@property (retain, nonatomic) id<MTLTexture> inChromaTex;
@property (retain, nonatomic) id<MTLTexture> inRGBAFloatTex;
@property (retain, nonatomic) NSDictionary *outMetaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
