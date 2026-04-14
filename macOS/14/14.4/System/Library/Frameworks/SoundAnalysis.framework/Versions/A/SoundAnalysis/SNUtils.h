@interface SNUtils : NSObject

+ (BOOL)isInternalBuild;
+ (BOOL)isRunningInDaemon;
+ (id)userSuppliedOutputFeatureNames:(id)a0;
+ (unsigned int)modelBlockSize:(id)a0;
+ (id)anyInputMultiArrayShape:(id)a0;
+ (id)anyOutputMultiArrayShape:(id)a0;
+ (void)copyAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 to:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 frameCount:(unsigned int)a2 bytesPerFrame:(unsigned int)a3;
+ (id)createMultiArrayContainingPreciseTimeRangeOfAudioFile:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 maxFramesPerBuffer:(unsigned int)a2 recycleBuffers:(BOOL)a3 prefixBufferPopulator:(id /* block */)a4 suffixBufferPopulator:(id /* block */)a5 numDimensions:(long long)a6 error:(id *)a7;
+ (void)deleteWAVAndTextFilesInDirectory:(id)a0 createdBeforeDate:(id)a1 withRemainingDirectoryByteSizeLessThan:(long long)a2;
+ (id)diskSpaceRemainingBytesContainingDirectory:(id)a0;
+ (id /* block */)errorBufferPopulator;
+ (id)fileCreationDate:(id)a0;
+ (id)fileSizeBytes:(id)a0;
+ (id)filteredClassLabelsFromModelDescription:(id)a0;
+ (BOOL)flushBytesFromPreciseTimeRangeInAudioFile:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1 maxFramesPerBuffer:(unsigned int)a2 recycleBuffers:(BOOL)a3 prefixBufferPopulator:(id /* block */)a4 suffixBufferPopulator:(id /* block */)a5 intoSink:(id /* block */)a6 error:(id *)a7;
+ (BOOL)flushBytesFromStreamSource:(id /* block */)a0 toBuffer:(void *)a1 ofSizeInBytes:(long long)a2 error:(id *)a3;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })lastDimensionSizeRange:(id)a0;
+ (id)loadModelAtURL:(id)a0 withTimeout:(double)a1 error:(id *)a2;
+ (id)loggingPrefixForRequest:(id)a0;
+ (unsigned int)modelBlockSize:(id)a0 channelCount:(unsigned int)a1;
+ (unsigned int)modelChannelCount:(id)a0;
+ (BOOL)multiArrayConstraintLastDimensionIsFlexible:(id)a0;
+ (int)numberOfElements:(id)a0;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })roundTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 toAllowableTime:(id)a1;
+ (int)shapeNonUnitaryDimensionCount:(id)a0;
+ (void)silenceUnfilledFramesInBuffer:(id)a0;
+ (id)soleUserSuppliedInputFeatureNameFromDescription:(id)a0 error:(id *)a1;
+ (id)splitBuffer:(id)a0 intoBuffersWithFrameCount:(unsigned int)a1;
+ (id)toFloatScalarConvertFromMLMultiArray:(id)a0 error:(id *)a1;
+ (id)toMLMultiArrayConvertFromFloatScalar:(id)a0 error:(id *)a1;
+ (id)userSuppliedInputFeatureNames:(id)a0;
+ (id)valueForEntitlement:(id)a0 error:(id *)a1;
+ (id)vggishFeatureEmbeddingInputShape;
+ (id)vggishFeatureEmbeddingOutputShape;
+ (id)vggishFrontEndProcessingInputShape;
+ (id)vggishFrontEndProcessingModelDescription;
+ (id)vggishFrontEndProcessingOutputShape;
+ (id)windowDurationConstraintFromModelDescription:(id)a0 sampleRate:(unsigned int)a1 error:(id *)a2;
+ (id)windowDurationConstraintFromMultiArrayShapeConstraint:(id)a0 sampleRate:(unsigned int)a1;
+ (id /* block */)zeroBufferPopulator;

- (id)init;

@end
