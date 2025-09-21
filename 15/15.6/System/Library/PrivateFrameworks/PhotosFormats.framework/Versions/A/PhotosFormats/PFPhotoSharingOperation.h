@class NSError, NSString, NSObject, NSURL, CLLocation, NSDate, PFAssetAdjustments;
@protocol OS_dispatch_queue;

@interface PFPhotoSharingOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_externalIsolation;
    NSError *_operationError;
    char _operationComplete;
    char _operationSuccess;
}

@property (copy, nonatomic, setter=_setImageURL:) NSURL *imageURL;
@property (retain, nonatomic, setter=_setAdjustments:) PFAssetAdjustments *_adjustments;
@property (copy, nonatomic) NSURL *outputDirectoryURL;
@property (copy, nonatomic) NSString *outputFilename;
@property (nonatomic) char shouldStripMetadata;
@property (nonatomic) char shouldStripLocation;
@property (copy, nonatomic) CLLocation *customLocation;
@property (copy, nonatomic) NSDate *customDate;
@property (nonatomic) char shouldStripCaption;
@property (copy, nonatomic) NSString *customCaption;
@property (nonatomic) char shouldStripAccessibilityDescription;
@property (copy, nonatomic) NSString *customAccessibilityLabel;
@property (nonatomic) char shouldConvertToSRGB;
@property (readonly, nonatomic) float progress;
@property (readonly, nonatomic) char success;
@property (readonly, copy, nonatomic) NSURL *resultingFileURL;
@property (readonly, nonatomic) NSError *operationError;

+ (char)outputSupportedForTypeIdentifier:(id)a0;
+ (id)operationErrorWithCode:(long long)a0 withDescription:(id)a1;

- (void).cxx_destruct;
- (void)main;
- (id)initWithImageURL:(id)a0 adjustmentData:(id)a1;

@end
