@class WBSAppLink, NSString, NSDictionary, NSURL, _WKContextMenuElementInfo;

@interface BrowserUIDelegateContextMenuInfo : NSObject {
    NSURL *_qrCodePayloadURL;
}

@property (readonly, nonatomic) _WKContextMenuElementInfo *contextMenuElementInfo;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSString *linkLabel;
@property (readonly, copy, nonatomic) NSString *linkTitle;
@property (readonly, nonatomic) NSURL *linkURL;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSURL *mediaURL;
@property (readonly, nonatomic, getter=isContentEditable) BOOL contentEditable;
@property (readonly, nonatomic) BOOL hasEntireImage;
@property (copy, nonatomic) NSString *appExtensionUUIDString;
@property (copy, nonatomic) NSString *appExtensionContextMenuItemCommandString;
@property (copy, nonatomic) NSDictionary *appExtensionContextMenuItemUserInfo;
@property (retain, nonatomic) WBSAppLink *appLink;
@property (readonly, nonatomic) NSURL *qrCodePayloadURL;

- (void).cxx_destruct;
- (id)initWithContextMenuElementInfo:(id)a0 userInfo:(id)a1;

@end
