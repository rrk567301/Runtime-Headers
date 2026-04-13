@class NSString, NSArray;
@protocol UINSAccessibilityInfo;

@interface UINSShareToolbarItem : UINSToolbarItem <NSSharingServiceDelegate, NSSharingServicePickerDelegate, UINSShareToolbarItem>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *activityItems;
@property (copy, nonatomic) id /* block */ completionWithItemsHandler;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id<UINSAccessibilityInfo> accessibilityInfo;
@property (copy, nonatomic) NSString *label;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)sharingServicePicker:(id)a0 delegateForSharingService:(id)a1;
- (id)sharingService:(id)a0 sourceWindowForShareItems:(id)a1 sharingContentScope:(long long *)a2;
- (void)sharingService:(id)a0 didFailToShareItems:(id)a1 error:(id)a2;
- (void)sharingService:(id)a0 didShareItems:(id)a1;
- (void)action:(id)a0;
- (void)prepareItem;

@end
