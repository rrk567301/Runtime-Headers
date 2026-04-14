@class NSURL, NSData, NSString;

@interface PHVideoResult : PHCompositeMediaResult

@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSData *videoMediaItemMakerData;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;

- (void).cxx_destruct;
- (BOOL)containsValidData;
- (id)allowedInfoKeys;
- (id)videoAdjustmentData;
- (void)setVideoAdjustmentData:(id)a0;

@end
