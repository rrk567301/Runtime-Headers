@class NSObject, NSString, NSArray, NSSet, FigCaptureCMIOExtensionSessionConfiguration, FigCaptureCMIOExtensionDevice, NSNumber;
@protocol OS_dispatch_queue;

@interface FigCaptureCMIOExtensionStream : CMIOExtensionStream <CMIOExtensionStreamSource> {
    NSArray *_formats;
    unsigned long long _activeFormatIndex;
    NSNumber *_minFrameRate;
    NSNumber *_maxFrameRate;
    BOOL _streaming;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, weak, nonatomic) FigCaptureCMIOExtensionDevice *device;
@property (readonly, retain, nonatomic) FigCaptureCMIOExtensionSessionConfiguration *sessionConfiguration;
@property (readonly, nonatomic) NSString *sinkID;
@property (readonly) NSArray *formats;
@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (BOOL)authorizedToStartStreamForClient:(id)a0;
- (BOOL)setStreamProperties:(id)a0 error:(id *)a1;
- (BOOL)startStreamAndReturnError:(id *)a0;
- (BOOL)stopStreamAndReturnError:(id *)a0;
- (id)streamPropertiesForProperties:(id)a0 error:(id *)a1;
- (void)_handleLocalQueueMessage:(struct FigLocalQueueMessage { int x0; union { struct { struct opaqueCMSampleBuffer *x0; } x0; struct { long long x0; struct opaqueCMFormatDescription *x1; } x1; } x1; })a0;
- (void)handleNotification:(id)a0 payload:(id)a1;
- (BOOL)_createFormats;
- (id)initWithType:(unsigned long long)a0 forDevice:(id)a1;

@end
