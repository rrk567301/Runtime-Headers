@class NSString;

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions> {
    BOOL _streamingAllowed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNetworkAccessAllowed;
- (BOOL)isStreamingAllowed;
- (BOOL)hasValidTimeRange;
- (BOOL)isMediumHighQualityAllowed;
- (BOOL)restrictToPlayableOnCurrentDevice;
- (BOOL)isExplicitUserAction;
- (long long)videoVersion;
- (long long)videoDeliveryMode;
- (id)initWithStreamingAllowed:(BOOL)a0;

@end
