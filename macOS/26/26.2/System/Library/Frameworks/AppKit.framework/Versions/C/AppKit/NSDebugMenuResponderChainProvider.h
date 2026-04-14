@class NSString, NSMenuItem;

@interface NSDebugMenuResponderChainProvider : NSObject <NSDebugMenuItemProvider>

@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateMenuItem:(id)a0;
- (void).cxx_destruct;
- (void)toggleResponderChainPanel:(id)a0;

@end
