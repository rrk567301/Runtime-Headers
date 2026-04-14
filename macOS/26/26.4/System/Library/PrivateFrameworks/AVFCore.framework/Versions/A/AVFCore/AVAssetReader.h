@class AVAsset, NSArray, AVAssetReaderInternal, NSError;

@interface AVAssetReader : NSObject {
    AVAssetReaderInternal *_priv;
}

@property (readonly, nonatomic, getter=_figAssetReader) struct OpaqueFigAssetReader { } *figAssetReader;
@property (nonatomic, getter=_readSingleSample, setter=_setReadSingleSample:) BOOL readSingleSample;
@property (readonly, retain, nonatomic) AVAsset *asset;
@property (readonly) long long status;
@property (readonly) NSError *error;
@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) NSArray *outputs;

+ (void)initialize;
+ (id)_errorForOSStatus:(int)a0;
+ (id)assetReaderWithAsset:(id)a0 error:(id *)a1;

- (BOOL)_canAddOutput:(id)a0 exceptionReason:(id *)a1;
- (void)_failWithError:(id)a0;
- (id)initWithAsset:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithAsset:(id)a0 error:(id *)a1;
- (void)addOutput:(id)a0;
- (BOOL)startReading;
- (void)_transitionToStatus:(long long)a0 failureError:(id)a1;
- (BOOL)preparesMediaDataForRealTimeConsumption;
- (void)cancelReading;
- (void)_tearDownFigAssetReader;
- (void)_outputDidFinish:(id)a0;
- (id)_commonInitWithAsset:(id)a0 options:(id)a1 error:(id *)a2;
- (id)init;
- (id)description;
- (BOOL)canAddOutput:(id)a0;
- (void)dealloc;
- (void)setPreparesMediaDataForRealTimeConsumption:(BOOL)a0;

@end
