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

- (void)dealloc;
- (void).cxx_destruct;
- (void)destroy;
- (id)init;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)applySettings:(id)a0 error:(id *)a1;

@end
