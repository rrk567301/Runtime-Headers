@class AVCaptureDepthDataOutputInternal_Tundra, NSObject;
@protocol OS_dispatch_queue, AVCaptureDepthDataOutputDelegate_Tundra;

@interface AVCaptureDepthDataOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureDepthDataOutputInternal_Tundra *_internal;
}

@property (readonly, nonatomic) id<AVCaptureDepthDataOutputDelegate_Tundra> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) char alwaysDiscardsLateDepthData;
@property (nonatomic, getter=isFilteringEnabled) char filteringEnabled;

+ (id)new;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (char)canAddConnectionForMediaType:(id)a0;
- (id)companionSettingsVideoDataOutput;
- (id)connectionMediaTypes;
- (void)setCompanionSettingsVideoDataOutput:(id)a0;
- (void)setDelegate:(id)a0 callbackQueue:(id)a1;

@end
