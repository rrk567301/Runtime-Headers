@class NSError, PXVideoStabilizeOperationSpec, NSString, NSDictionary, AVAudioMix, AVVideoComposition, PLPhotoEditRenderer, AVAsset;

@interface _PXVideoStabilizeResult : NSObject <PXVideoStabilizeResult>

@property (retain, nonatomic) PXVideoStabilizeOperationSpec *spec;
@property (retain, nonatomic) AVAsset *outputVideoAsset;
@property (retain, nonatomic) AVAudioMix *outputAudioMix;
@property (retain, nonatomic) AVVideoComposition *outputVideoComposition;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long analysisType;
@property (retain, nonatomic) NSDictionary *stabilizationRecipe;
@property (retain, nonatomic) NSDictionary *debugInfo;
@property (retain) PLPhotoEditRenderer *renderer;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
