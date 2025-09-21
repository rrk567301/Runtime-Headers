@class NSArray, TKTonePickerSectionItem, NSString;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem>

@property (weak, nonatomic, setter=_setParentSectionItem:) TKTonePickerSectionItem *parentSectionItem;
@property (copy, nonatomic, setter=_setChildrenToneClassicsPickerItems:) NSArray *childrenToneClassicsPickerItems;
@property (nonatomic, setter=_setItemKind:) unsigned long long itemKind;
@property (nonatomic, setter=_setNeedsRoomForCheckmark:) char needsRoomForCheckmark;
@property (nonatomic, setter=_setNeedsActivityIndicator:) char needsActivityIndicator;
@property (nonatomic, setter=_setNeedsSwitch:) char needsSwitch;
@property (nonatomic, getter=isSwitchedOn, setter=_setSwitchedOn:) char switchedOn;
@property (nonatomic, setter=_setNeedsDownloadProgress:) char needsDownloadProgress;
@property (nonatomic, setter=_setDownloadProgress:) float downloadProgress;
@property (readonly, nonatomic) long long numberOfChildren;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)childItemAtIndex:(long long)a0;
- (void)_appendDescriptionOfAttributesToString:(id)a0;

@end
