@class NSString;

@interface NSSharingServiceItemProvider : NSOperation <NSSharingServiceItemSource>

@property (retain) id placeholderItem;
@property (retain) id providedItem;
@property (copy, setter=_setSharingServiceName:) NSString *sharingServiceName;
@property (readonly) id item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPlaceholderItem:(id)a0;
- (id)sharingServicePicker:(id)a0 itemForSharingServiceName:(id)a1;
- (id)sharingServicePickerPlaceholderItem:(id)a0;

@end
