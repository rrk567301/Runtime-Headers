@class NSString, NSSharingServicePicker;

@interface UINSSharingMenu : NSMenu <NSMenuDelegate, NSSharingServicePickerDelegate>

@property (retain) NSSharingServicePicker *picker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_currentActivityItemsConfiguration;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;

@end
