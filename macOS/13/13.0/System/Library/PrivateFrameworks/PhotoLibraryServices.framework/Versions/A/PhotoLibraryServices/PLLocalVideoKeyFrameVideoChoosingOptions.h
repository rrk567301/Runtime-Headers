@class NSString;

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions> {
    BOOL _streamingAllowed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNetworkAccessAllowed;
- (long long)videoVersion;
- (BOOL)restrictToPlayableOnCurrentDevice;
- (long long)videoDeliveryMode;
- (BOOL)isMediumHighQualityAllowed;
- (BOOL)isStreamingAllowed;
- (BOOL)hasValidTimeRange;
- (BOOL)isExplicitUserAction;
- (id)initWithStreamingAllowed:(BOOL)a0;

@end
