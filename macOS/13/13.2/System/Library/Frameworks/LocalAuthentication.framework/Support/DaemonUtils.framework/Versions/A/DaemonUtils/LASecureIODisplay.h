@class NSString, NSTouchBar, LASecureIOTouchBarView;

@interface LASecureIODisplay : NSObject <NSTouchBarDelegate> {
    NSTouchBar *_touchBar;
    LASecureIOTouchBarView *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)display;
+ (id)displayWidth;
+ (BOOL)isDFRSupported;
+ (BOOL)hasPhysicalESCKey;

- (id)init;
- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (long long)displayScene:(id)a0;
- (void)buttonPressedCallback:(unsigned int)a0;
- (void)connectionInterruptedCallback:(void *)a0;

@end
