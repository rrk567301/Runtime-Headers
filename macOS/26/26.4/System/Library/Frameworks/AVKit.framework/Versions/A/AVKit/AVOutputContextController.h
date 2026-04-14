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

- (id)initWithOutputContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_outputDeviceChangedNotification:(id)a0;
- (void)_updateCachedValues;
- (BOOL)setOutputDevice:(id)a0 forFeature:(unsigned long long)a1;

@end
