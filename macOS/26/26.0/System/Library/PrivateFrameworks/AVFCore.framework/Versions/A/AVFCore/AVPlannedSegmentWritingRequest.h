@class NSURL, NSDictionary;

@interface AVPlannedSegmentWritingRequest : NSObject {
    id /* block */ _finishBlock;
}

@property (readonly) NSURL *segmentFileOutputURL;
@property (readonly) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly) int assemblyTrackID;
@property (readonly) NSDictionary *requiredOutputSettings;

+ (id)requestWithSegmentFileOutputURL:(id)a0 assemblyTrackID:(int)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 outputSettings:(id)a3 finishBlock:(id /* block */)a4;

- (void)dealloc;
- (void)finish;
- (void)finishWithError:(id)a0;
- (id)description;
- (void)finishCommon:(id)a0 error:(id)a1;
- (void)finishWithFinalHDRMetadataGenerationState:(id)a0;
- (id)initWithSegmentFileOutputURL:(id)a0 assemblyTrackID:(int)a1 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 outputSettings:(id)a3 finishBlock:(id /* block */)a4;

@end
