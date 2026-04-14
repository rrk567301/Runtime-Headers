@class CMCaptureLocalSessionController, NSSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureCMIOExtensionProvider : CMIOExtensionProvider <CMIOExtensionProviderSource> {
    NSObject<OS_dispatch_queue> *_queue;
    CMCaptureLocalSessionController *_captureSessionController;
    BOOL _invalidated;
}

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain, nonatomic) CMCaptureLocalSessionController *captureSessionController;
@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;

- (id)initWithQueue:(id)a0;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)connectClient:(id)a0 error:(id *)a1;
- (void)disconnectClient:(id)a0;
- (id)providerPropertiesForProperties:(id)a0 error:(id *)a1;
- (BOOL)setProviderProperties:(id)a0 error:(id *)a1;
- (id)deviceOfType:(unsigned long long)a0;
- (void)setCaptureSessionController:(id)a0;

@end
