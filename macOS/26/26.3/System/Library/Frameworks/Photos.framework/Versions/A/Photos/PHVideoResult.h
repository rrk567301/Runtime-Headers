@class NSString, NSURL, NSData, PFSlowMotionTimeRangeMapper;

@interface PHVideoResult : PHCompositeMediaResult

@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSData *videoMediaItemMakerData;
@property (retain, nonatomic) NSString *fingerPrint;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (retain, nonatomic) PFSlowMotionTimeRangeMapper *timeRangeMapper;

- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (void).cxx_destruct;
- (void)setVideoAdjustmentData:(id)a0;
- (id)videoAdjustmentData;

@end
