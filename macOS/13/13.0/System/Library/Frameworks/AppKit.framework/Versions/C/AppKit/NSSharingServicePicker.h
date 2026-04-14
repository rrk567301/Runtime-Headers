@class NSArray, NSDictionary, NSView, NSMenu, NSMenuItem, CALayer;
@protocol NSSharingServicePickerDelegate;

@interface NSSharingServicePicker : NSObject {
    id _reserved;
    NSMenu *rolloverMenu;
    CALayer *rolloverLayer;
    CALayer *innerBorderLayer;
    NSView *owner;
    NSArray *shareServices;
    NSArray *mainServices;
    NSArray *_applicationServices;
    NSArray *_excludedSharingServiceNames;
    NSDictionary *_shareKitInfo;
}

@property (copy) NSArray *applicationServices;
@property (copy) NSArray *excludedSharingServiceNames;
@property (copy) NSDictionary *shareKitInfo;
@property (weak) id<NSSharingServicePickerDelegate> delegate;
@property (readonly) NSMenuItem *standardShareMenuItem;

+ (void)initialize;
+ (id)sharedMoreMenuImage;
+ (void)openAppExtensionsPrefPane;

- (void)dealloc;
- (void)close;
- (id)menu;
- (long long)style;
- (void)setStyle:(long long)a0;
- (void)hide;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 preferredEdge:(unsigned long long)a1;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)showRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (unsigned long long)collaborationMode;
- (void)_serviceSelected:(id)a0;
- (void)_uppercaseString:(id)a0;
- (void)_openAppExtensionsPrefpane:(id)a0;
- (id)standardShareMenuItemRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2;
- (id)initWithItems:(id)a0;
- (id)_prepareSHKSharingServicePicker;
- (void)_queryServices;
- (id)emptyMenuImage;
- (id)moreMenuImage;
- (id)_representedObjectForService:(id)a0 alternateItemIdentifier:(id)a1;
- (id)_serviceFromRepresentedObject:(id)a0;
- (id)_alternateItemIdentifierFromRepresentedObject:(id)a0;
- (id)_touchBarImageFromRepresentedObject:(id)a0;
- (BOOL)displaysAsPopUpMenu;
- (id)menuItemFromService:(id)a0;
- (void)_updateRolloverMenu:(id)a0;
- (void)showPopoverRelativeToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 preferredEdge:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)rolloverButtonCell;
- (void)getMenuWithCompletion:(id /* block */)a0;
- (void)setCollaborationMode:(unsigned long long)a0;

@end
