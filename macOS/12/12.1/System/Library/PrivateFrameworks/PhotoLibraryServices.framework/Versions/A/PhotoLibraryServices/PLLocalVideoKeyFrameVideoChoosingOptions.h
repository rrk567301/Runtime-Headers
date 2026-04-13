@class NSString;

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions> {
    BOOL _streamingAllowed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNetworkAccessAllowed;
- (BOOL)hasValidTimeRange;
- (BOOL)isStreamingAllowed;
- (BOOL)restrictToPlayableOnCurrentDevice;
- (BOOL)isMediumHighQualityAllowed;
- (BOOL)isExplicitUserAction;
- (long long)videoVersion;
- (long long)videoDeliveryMode;
- (id)initWithStreamingAllowed:(BOOL)a0;

@end
