@class NSMutableDictionary, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface AXMSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    NSMutableDictionary *_queue_settingObservers;
}

@property (nonatomic) char writeOutInputImages;
@property (nonatomic) char writeOutOCRInputImages;
@property (nonatomic) char writeOutScreenCaptures;
@property (nonatomic) char useANODModelForAXElementVision;

+ (id)settings;

- (void).cxx_destruct;
- (id)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_queue_removeObserver:(id)a0 forSetting:(id)a1;
- (void)addObserver:(id)a0 forSeetting:(id)a1 withBlock:(id /* block */)a2;
- (void)removeObserver:(id)a0 forSetting:(id)a1;
- (void)removeObserverForAllSettings:(id)a0;
- (void)setUseANODModelForAXElementVision:(char)a0;
- (void)setWriteOutInputImages:(char)a0;
- (void)setWriteOutOCRInputImages:(char)a0;
- (void)setWriteOutScreenCaptures:(char)a0;
- (char)useANODModelForAXElementVision;
- (char)writeOutInputImages;
- (char)writeOutOCRInputImages;
- (char)writeOutScreenCaptures;

@end
