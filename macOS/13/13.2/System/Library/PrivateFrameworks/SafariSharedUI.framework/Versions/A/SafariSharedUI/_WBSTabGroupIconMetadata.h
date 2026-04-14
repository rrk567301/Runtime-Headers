@class NSImage, NSString, NSArray;

@interface _WBSTabGroupIconMetadata : NSObject {
    NSString *_uuid;
    NSArray *_tabUrlArray;
}

@property (copy) NSImage *iconImage;
@property (retain, nonatomic) id token;

- (void).cxx_destruct;
- (id)_configuration;
- (id)initWithTabGroup:(id)a0 token:(id)a1;
- (BOOL)hasSameIconAsTabGroup:(id)a0;
- (id)_arrayOfThumbnailURLsShownInFolderIconFromTabsArray:(id)a0;

@end
