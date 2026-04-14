@class NSString, NSArray, NSURL, NSSharingServicePicker;
@protocol NSSharingServiceDelegate, _MKPlaceItem, NSSharingServicePickerDelegate;

@interface MKSharingController : NSObject <NSSharingServicePickerDelegate, NSSharingServiceDelegate> {
    id<_MKPlaceItem> _placeItem;
    NSURL *_airDropURL;
    NSString *_vCardTemporaryPath;
}

@property (weak, nonatomic) id<NSSharingServiceDelegate, NSSharingServicePickerDelegate> delegate;
@property (readonly, nonatomic) NSSharingServicePicker *picker;
@property (copy, nonatomic) NSURL *mapsURL;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *vCardTemporaryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharingControllerForPlaceItem:(id)a0;
+ (void)addMapItemToContacts:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)sharingService:(id)a0 optionsForItems:(id)a1;
- (id)initWithPlaceItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 opaqueFrameForSourceWindow:(id)a1;
- (id)airDropURL;
- (BOOL)sharingService:(id)a0 canShareAlternatePDFForItems:(id)a1;
- (BOOL)_exportVCard;
- (id)sharingService:(id)a0 sharedItemsFromProposedItems:(id)a1;
- (id)sharingService:(id)a0 imageForShareItem:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;

@end
