@class NSTouchBar, NSString;

@interface NSApplicationFunctionRowContainer : NSObject <NSTouchBarProviderContainer>

@property (readonly) NSTouchBar *touchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)dealloc;
- (id)NS_touchBarProvidersKeyPaths;
- (id)NS_touchBarProviders;
- (BOOL)_lockoutEngaged;

@end
