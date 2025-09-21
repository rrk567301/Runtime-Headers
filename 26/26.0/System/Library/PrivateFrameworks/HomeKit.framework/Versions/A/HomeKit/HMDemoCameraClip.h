@class NSURL;

@interface HMDemoCameraClip : HMCameraClip

@property (readonly, copy) NSURL *clipURL;

- (void).cxx_destruct;
- (id)initWithClipURL:(id)a0 startDate:(id)a1 duration:(double)a2 significantEvents:(id)a3;

@end
