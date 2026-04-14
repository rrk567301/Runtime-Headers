@class NSArray, NSDictionary, NSString, NSSharingServicePicker;
@protocol UINSActivityItemsConfigurationReading;

@interface UINSShareSheetController : NSObject <UINSShareSheetController, NSSharingServicePickerDelegate, NSSharingServiceDelegate, NSSharingServicePickerToolbarItemDelegate>

@property (retain) NSSharingServicePicker *sharingServicePicker;
@property (retain, nonatomic) id<UINSActivityItemsConfigurationReading> activityItemsConfiguration;
@property (copy, nonatomic) id /* block */ completionWithItemsHandler;
@property (copy, nonatomic) id /* block */ activitySelectedHandler;
@property (retain, nonatomic) NSArray *applicationActivities;
@property (readonly, copy, nonatomic) NSArray *applicationServices;
@property (retain, nonatomic) NSArray *excludedActivityTypes;
@property (nonatomic) long long sharingStyle;
@property (copy, nonatomic) NSDictionary *shareKitInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedShareSheetController;

- (void).cxx_destruct;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (id)itemsForSharingServicePickerToolbarItem:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromUIWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)keyHostWindow;
- (void)_finishSessionWithSuccess:(BOOL)a0 sharingService:(id)a1 shareItems:(id)a2 error:(id)a3;
- (void)presentShareSheetWithItems:(id)a0 atUIWindowRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
