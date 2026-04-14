@class NSArray, NSDate;

@interface HMDCameraClipImportMetadata : NSObject

@property (readonly) NSDate *startDate;
@property (readonly) double targetFragmentDuration;
@property (readonly) NSArray *videoSegments;
@property (readonly) NSArray *posterFrames;

- (void).cxx_destruct;
- (id)initWithClipData:(id)a0;

@end
