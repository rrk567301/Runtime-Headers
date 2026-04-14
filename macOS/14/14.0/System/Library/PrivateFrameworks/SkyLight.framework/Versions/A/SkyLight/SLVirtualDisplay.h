@class SLVirtualDisplaySettings, SLVirtualDisplayConfiguration;
@protocol SLVirtualDisplayDelegate;

@interface SLVirtualDisplay : NSObject {
    SLVirtualDisplayConfiguration *_config;
    SLVirtualDisplaySettings *_settings;
    void *_client;
}

@property (readonly, nonatomic) unsigned int displayID;
@property (weak, nonatomic) id<SLVirtualDisplayDelegate> delegate;

+ (id)capabilities;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)destroy;
- (BOOL)applySettings:(id)a0 error:(id *)a1;

@end
