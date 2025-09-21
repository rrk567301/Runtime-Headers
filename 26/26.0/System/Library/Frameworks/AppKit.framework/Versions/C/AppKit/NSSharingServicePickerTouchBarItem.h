@class NSString, NSImage, NSTouchBar, NSTouchBarSharingServicePickerViewController, NSPopoverTouchBarItem;
@protocol NSSharingServicePickerTouchBarItemDelegate;

@interface NSSharingServicePickerTouchBarItem : NSTouchBarItem <NSTouchBarItemTypePopover> {
    NSPopoverTouchBarItem *_internalPopoverItem;
    NSTouchBarSharingServicePickerViewController *_pickerViewController;
}

@property (readonly) NSTouchBar *popoverFunctionBar;
@property (readonly) BOOL supportsPressAndHold;
@property (readonly) BOOL showsCloseButton;
@property (readonly) BOOL isPresented;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *customizationLabel;
@property (weak) id<NSSharingServicePickerTouchBarItemDelegate> delegate;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *buttonTitle;
@property (retain) NSImage *buttonImage;

- (void)setItems:(id)a0;
- (long long)_type;
- (id)items;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)buttonTitle;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)view;
- (void).cxx_destruct;
- (void)setButtonImage:(id)a0;
- (void)dismissPopover:(id)a0;
- (void)setButtonTitle:(id)a0;
- (void)_makeInternalPopoverItemWithButtonTitle:(id)a0 buttonImage:(id)a1;
- (id)_shareButton;
- (id)buttonImage;
- (id)itemsForSharingServicePickerTouchBarItem:(id)a0;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingServicePickerCollaborationModeRestrictions:(id)a0;
- (void)showPopover:(id)a0;

@end
