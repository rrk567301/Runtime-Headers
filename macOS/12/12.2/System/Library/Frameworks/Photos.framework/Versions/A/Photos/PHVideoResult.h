@class NSURL, NSString;

@interface PHVideoResult : PHCompositeMediaResult

@property (retain, nonatomic) NSURL *videoURL;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (id)videoAdjustmentData;
- (void)setVideoAdjustmentData:(id)a0;

@end
