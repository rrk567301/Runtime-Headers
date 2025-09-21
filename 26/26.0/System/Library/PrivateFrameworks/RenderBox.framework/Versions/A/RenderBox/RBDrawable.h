@class NSString, RBDevice, NSDictionary;
@protocol MTLTexture, RBDrawableDelegate, MTLEvent;

@interface RBDrawable : NSObject <RBDrawableStatistics> {
    struct refcounted_ptr<RB::Drawable> { struct Drawable *_p; } _drawable;
    struct weak_objc_ptr<id<RBDrawableDelegate>> { id<RBDrawableDelegate> _p; } _delegate;
    struct objc_ptr<RBDevice *> { RBDevice *_p; } _device;
    struct objc_ptr<id<MTLTexture>> { id<MTLTexture> _p; } _texture;
    struct objc_ptr<NSString *> { NSString *_p; } _label;
    struct objc_ptr<id<MTLEvent>> { id<MTLEvent> _p; } _event;
    struct objc_ptr<void (^)()> { id /* block */ _p; } _scheduled_handler;
    struct objc_ptr<void (^)()> { id /* block */ _p; } _completed_handler;
    struct optional<unsigned char> { union { char __null_state_; unsigned char __val_; } ; BOOL __engaged_; } _gpu_priority;
    struct optional<unsigned char> { union { char __null_state_; unsigned char __val_; } ; BOOL __engaged_; } _bg_gpu_priority;
}

@property (readonly, nonatomic) RBDevice *device;
@property unsigned long long GPUPriority;
@property unsigned long long backgroundGPUPriority;
@property (weak, nonatomic) id<RBDrawableDelegate> delegate;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double scale;
@property (nonatomic) int workingColorSpace;
@property (nonatomic) int targetColorSpace;
@property (nonatomic) float targetHeadroom;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) int initialState;
@property (nonatomic) struct { float red; float green; float blue; float alpha; } clearColor;
@property (retain, nonatomic) id<MTLTexture> texture;
@property (retain, nonatomic) id<MTLEvent> event;
@property (nonatomic) unsigned long long eventValue;
@property (copy, nonatomic) id /* block */ scheduledHandler;
@property (copy, nonatomic) id /* block */ completedHandler;
@property (readonly, nonatomic) double GPUDuration;
@property (readonly, copy, nonatomic) NSDictionary *statistics;
@property (copy, nonatomic) id /* block */ statisticsHandler;

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (void)finish;
- (id).cxx_construct;
- (void)resetStatistics:(unsigned long long)a0 alpha:(double)a1;
- (void).cxx_destruct;
- (void)dumpTexture:(id)a0 name:(id)a1;
- (void)renderDisplayList:(id)a0 flags:(unsigned int)a1;
- (void)renderDisplayList:(id)a0 sourceRect:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1 destinationOffset:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 flags:(unsigned int)a3;
- (void)renderItems:(id)a0 flags:(unsigned int)a1;

@end
