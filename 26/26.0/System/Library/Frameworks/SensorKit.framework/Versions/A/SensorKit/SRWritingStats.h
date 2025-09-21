@class NSString;

@interface SRWritingStats : NSObject {
    double _sessionStart;
    NSString *_sensor;
    unsigned long long _totalBytesWritten;
    unsigned long long _totalSamplesWritten;
    double _segmentCreationTime;
    unsigned long long _rateAdjustedSegmentSize;
}

@property (readonly, nonatomic) unsigned long long totalSegmentsCreated;
@property (readonly, nonatomic) double totalFillDuration;

- (void)dealloc;
- (id)description;

@end
