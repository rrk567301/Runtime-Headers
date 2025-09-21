@class NSString, NSMenuItem;

@interface NSDebugMenuTextDebuggingProvider : NSObject <NSDebugMenuItemProvider>

@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateMenuItem:(id)a0;
- (void).cxx_destruct;
- (id)textDebuggingSubmenu;
- (void)toggleParagraphAnchoredMode:(id)a0;
- (void)toggleTextViewInspectorPanel:(id)a0;

@end
