@class LPLinkMetadata, NSString, NSImage, NSURL, NSData, NSItemProvider;

@interface ActiveWebPageShareItem : NSExtensionItem <SHKShareItem, NSSharingServiceItemSource> {
    LPLinkMetadata *_linkMetadata;
    NSItemProvider *_iconProvider;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, retain) NSString *shareItemType;
@property (readonly, retain) NSURL *shareItemURL;
@property (readonly, retain) NSString *shareItemString;
@property (readonly, retain) NSImage *shareItemImage;
@property (readonly, retain) NSData *shareItemData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareItemOrURLForURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)sharingServicePickerPlaceholderItem:(id)a0;
- (id)sharingServicePicker:(id)a0 itemForSharingServiceName:(id)a1;
- (id)sharingServicePickerLinkMetadata:(id)a0;

@end
