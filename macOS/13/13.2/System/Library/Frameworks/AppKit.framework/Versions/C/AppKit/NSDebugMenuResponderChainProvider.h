@class NSString, NSMenuItem;

@interface NSDebugMenuResponderChainProvider : NSObject <NSDebugMenuItemProvider>

@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)a0;
- (void)toggleResponderChainPanel:(id)a0;

@end
