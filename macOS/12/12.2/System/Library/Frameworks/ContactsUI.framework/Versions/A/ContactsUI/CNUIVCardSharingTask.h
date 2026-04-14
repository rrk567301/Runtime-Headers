@class NSString, CNContact, NSArray, NSSharingServicePicker;
@protocol CNUIShareKitTransitionProvider;

@interface CNUIVCardSharingTask : NSObject <NSSharingServiceDelegate, NSSharingServicePickerDelegate, NSSharingServicePickerTouchBarItemDelegate>

@property (retain) CNContact *contact;
@property (retain) NSSharingServicePicker *servicePicker;
@property (copy) NSString *emailSubject;
@property (copy) NSArray *defaultRecipients;
@property (retain) id<CNUIShareKitTransitionProvider> transitionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)makeVCardShareingServices;
+ (id)menuItemTitleForSharingServiceName:(id)a0;
+ (id)vCardSharingServices;
+ (id)menuItemTitleForSharingMyCardUsingService:(id)a0;

- (void).cxx_destruct;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (id)itemsForSharingServicePickerTouchBarItem:(id)a0;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sharingService:(id)a0 sourceFrameOnScreenForShareItem:(id)a1;
- (id)sharingService:(id)a0 transitionImageForShareItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)sharingService:(id)a0 willShareItems:(id)a1;
- (void)setupVCardForContact:(id)a0;
- (id)sharingParametersForService:(id)a0;
- (void)shareVCardForPerson:(id)a0 showingServicePickerFromView:(id)a1;
- (void)shareVCardForPerson:(id)a0 usingService:(id)a1;

@end
