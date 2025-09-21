@class _WKContextMenuElementInfo, NSString, NSURL, WBSAppLink, NSDictionary, NSURLResponse, WKFrameInfo, WKWebView;

@interface BrowserUIDelegateContextMenuInfo : NSObject {
    NSURL *_qrCodePayloadURL;
}

@property (readonly, weak, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) _WKContextMenuElementInfo *contextMenuElementInfo;
@property (readonly, copy, nonatomic) NSString *linkLabel;
@property (readonly, copy, nonatomic) NSString *linkTitle;
@property (readonly, copy, nonatomic) NSString *linkSuggestedFilename;
@property (readonly, copy, nonatomic) NSString *imageSuggestedFilename;
@property (readonly, nonatomic) NSURL *linkURL;
@property (readonly, nonatomic) NSURLResponse *linkLocalResourceResponse;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSString *imageMIMEType;
@property (readonly, nonatomic) NSURL *mediaURL;
@property (readonly, nonatomic, getter=isContentEditable) BOOL contentEditable;
@property (readonly, nonatomic) BOOL hasEntireImage;
@property (readonly, nonatomic) BOOL allowsFollowingLink;
@property (readonly, nonatomic) BOOL allowsFollowingImageURL;
@property (readonly, nonatomic) long long elementType;
@property (readonly, nonatomic, getter=isElementSelected) BOOL elementSelected;
@property (readonly, nonatomic, getter=isMediaFullscreen) BOOL mediaFullscreen;
@property (readonly, nonatomic, getter=isMediaDownloadable) BOOL mediaDownloadable;
@property (copy, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) WKFrameInfo *frameInfo;
@property (copy, nonatomic) NSString *appExtensionUUIDString;
@property (copy, nonatomic) NSString *appExtensionContextMenuItemCommandString;
@property (copy, nonatomic) NSDictionary *appExtensionContextMenuItemUserInfo;
@property (retain, nonatomic) WBSAppLink *appLink;
@property (readonly, nonatomic) NSURL *qrCodePayloadURL;

- (void).cxx_destruct;
- (id)initWithContextMenuElementInfo:(id)a0 webView:(id)a1;

@end
