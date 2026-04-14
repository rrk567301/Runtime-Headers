@class SLVirtualDisplaySettings, SLVirtualDisplayConfiguration;
@protocol SLVirtualDisplayDelegate;

@interface SLVirtualDisplay : NSObject {
    id /* block */ _zeroWeakSelf;
    SLVirtualDisplayConfiguration *_config;
    SLVirtualDisplaySettings *_settings;
}

@property (readonly, nonatomic) unsigned int displayID;
@property (weak, nonatomic) id<SLVirtualDisplayDelegate> delegate;

+ (id)capabilities;

- (void)destroy;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)applySettings:(id)a0 error:(id *)a1;

@end
