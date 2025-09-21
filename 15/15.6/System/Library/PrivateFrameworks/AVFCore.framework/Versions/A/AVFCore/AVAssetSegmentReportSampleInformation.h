@interface AVAssetSegmentReportSampleInformation : NSObject

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } presentationTimeStamp;
@property (readonly, nonatomic) long long offset;
@property (readonly, nonatomic) long long length;
@property (readonly, nonatomic) char isSyncSample;

- (void)dealloc;
- (id)initWithFigSegmentReportSampleInformationDictionary:(id)a0;

@end
