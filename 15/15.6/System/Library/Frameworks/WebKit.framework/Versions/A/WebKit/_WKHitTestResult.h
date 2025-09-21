@class NSURL, NSString, WKFrameInfo;

@interface _WKHitTestResult : NSObject <WKObject, NSCopying> {
    struct ObjectStorage<API::HitTestResult> { struct type { unsigned char __lx[816]; } data; } _hitTestResult;
}

@property (readonly, copy, nonatomic) NSURL *absoluteImageURL;
@property (readonly, copy, nonatomic) NSString *imageMIMEType;
@property (readonly, copy, nonatomic) NSURL *absolutePDFURL;
@property (readonly, copy, nonatomic) NSURL *absoluteLinkURL;
@property (readonly, nonatomic) char hasLocalDataForLinkURL;
@property (readonly, copy, nonatomic) NSString *linkLocalDataMIMEType;
@property (readonly, copy, nonatomic) NSURL *absoluteMediaURL;
@property (readonly, copy, nonatomic) NSString *linkLabel;
@property (readonly, copy, nonatomic) NSString *linkTitle;
@property (readonly, copy, nonatomic) NSString *linkSuggestedFilename;
@property (readonly, copy, nonatomic) NSString *imageSuggestedFilename;
@property (readonly, copy, nonatomic) NSString *lookupText;
@property (readonly, nonatomic, getter=isContentEditable) char contentEditable;
@property (readonly, nonatomic, getter=isSelected) char selected;
@property (readonly, nonatomic, getter=isMediaDownloadable) char mediaDownloadable;
@property (readonly, nonatomic, getter=isMediaFullscreen) char mediaFullscreen;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } elementBoundingBox;
@property (readonly, nonatomic) long long elementType;
@property (readonly, nonatomic) WKFrameInfo *frameInfo;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
