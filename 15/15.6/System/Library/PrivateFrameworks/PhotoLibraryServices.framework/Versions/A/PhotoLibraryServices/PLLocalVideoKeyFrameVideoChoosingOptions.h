@class NSString;

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions> {
    char _streamingAllowed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isNetworkAccessAllowed;
- (char)hasValidTimeRange;
- (char)isExplicitUserAction;
- (char)isMediumHighQualityAllowed;
- (char)isStreamingAllowed;
- (char)restrictToPlayableOnCurrentDevice;
- (char)restrictToStreamable;
- (long long)videoDeliveryMode;
- (long long)videoVersion;
- (id)initWithStreamingAllowed:(char)a0;

@end
