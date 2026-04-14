@class AVCaptureDepthDataOutputInternal_Tundra, NSObject;
@protocol OS_dispatch_queue, AVCaptureDepthDataOutputDelegate_Tundra;

@interface AVCaptureDepthDataOutput_Tundra : AVCaptureOutput_Tundra {
    AVCaptureDepthDataOutputInternal_Tundra *_internal;
}

@property (readonly, nonatomic) id<AVCaptureDepthDataOutputDelegate_Tundra> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (nonatomic) BOOL alwaysDiscardsLateDepthData;
@property (nonatomic, getter=isFilteringEnabled) BOOL filteringEnabled;

+ (void)initialize;
+ (id)new;

- (void)dealloc;
- (id)init;
- (id)connectionMediaTypes;
- (BOOL)canAddConnectionForMediaType:(id)a0;
- (void)setDelegate:(id)a0 callbackQueue:(id)a1;

@end
