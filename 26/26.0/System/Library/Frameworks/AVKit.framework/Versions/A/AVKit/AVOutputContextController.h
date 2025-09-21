@class AVOutputContext, NSString, AVOutputDevice;

@interface AVOutputContextController : NSObject {
    AVOutputDevice *_cachedOutputDevice;
    NSString *_cachedOutputDeviceName;
}

@property (readonly) AVOutputContext *outputContext;
@property (readonly, getter=isExternalOutputDevicePicked) BOOL externalOutputDevicePicked;
@property (readonly) NSString *outputDeviceName;
@property (readonly) AVOutputDevice *outputDevice;

+ (id)keyPathsForValuesAffectingExternalOutputDevicePicked;

- (void)dealloc;
- (id)init;
- (id)initWithOutputContext:(id)a0;
- (void).cxx_destruct;
- (void)_outputDeviceChangedNotification:(id)a0;
- (void)_updateCachedValues;
- (BOOL)setOutputDevice:(id)a0 forFeature:(unsigned long long)a1;

@end
