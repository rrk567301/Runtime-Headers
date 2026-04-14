@class NSUUID, NSString, NSArray, SFSafariExtensionRemoteViewController, NSImage, NSPopover, NSMapTable, BrowserWindowController;

@interface AppExtensionToolbarItem : NSObject <NSPopoverDelegate, SFSafariExtensionRemoteViewControllerDelegate> {
    NSMapTable *_browserWindowControllerToToolbarItemMap;
    NSPopover *_visiblePopover;
    id _queuedSender;
    BrowserWindowController *_queuedBrowserWindowController;
}

@property (readonly, copy, nonatomic) NSString *toolbarIdentifier;
@property (readonly, copy, nonatomic) NSString *toolbarItemUniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *extensionUUID;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSArray *allToolbarItems;
@property (retain, nonatomic) SFSafariExtensionRemoteViewController *remotePopoverViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniqueToolbarItemIdentifier:(id)a0 toolbarIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)popoverWillShow:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)safariExtensionRemoteViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)performClickActionWithSender:(id)a0 inWindowController:(id)a1;
- (id)initWithIdentifier:(id)a0 composedExtensionIdentifier:(id)a1 extensionUUID:(id)a2 label:(id)a3 image:(id)a4 action:(id)a5;
- (id)toolbarItemForBrowserWindowController:(id)a0;
- (id)toolbarItemWithUUID:(id)a0;
- (void)insertIntoToolbar;
- (void)removeFromToolbar;
- (void)validateExtensionToolbarItem:(id)a0;

@end
