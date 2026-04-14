@class BWPrewarmResourceConfiguration, BWStillImageSettings;

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {
    BWStillImageSettings *_stillImageSettings;
}

@property (readonly) BWStillImageSettings *stillImageSettings;
@property (readonly) BWPrewarmResourceConfiguration *resourceConfig;

+ (id)newMessageWithStillImageSettings:(id)a0 resourceConfig:(id)a1;

- (void)dealloc;
- (id)_initWithStillImageSettings:(id)a0 resourceConfig:(id)a1;

@end
