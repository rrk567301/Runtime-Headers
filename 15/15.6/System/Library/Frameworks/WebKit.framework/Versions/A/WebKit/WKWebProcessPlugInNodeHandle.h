@class WKWebProcessPlugInFrame, NSString;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> { struct type { unsigned char __lx[64]; } data; } _nodeHandle;
}

@property (readonly) void *_nodeHandle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } elementBounds;
@property (nonatomic) char HTMLInputElementIsAutoFilled;
@property (nonatomic) char HTMLInputElementIsAutoFilledAndViewable;
@property (nonatomic) char HTMLInputElementIsAutoFilledAndObscured;
@property (readonly, nonatomic) char HTMLInputElementIsUserEdited;
@property (readonly, nonatomic) char HTMLTextAreaElementIsUserEdited;
@property (readonly, nonatomic) WKWebProcessPlugInNodeHandle *HTMLTableCellElementCellAbove;
@property (readonly, nonatomic) WKWebProcessPlugInFrame *frame;
@property (readonly, nonatomic) char isSelectElement;
@property (readonly, nonatomic) char isSelectableTextNode;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeHandleWithJSValue:(id)a0 inContext:(id)a1;

- (void)dealloc;
- (id)renderedImageWithOptions:(unsigned int)a0 width:(id)a1;
- (id)htmlIFrameElementContentFrame;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (char)isHTMLInputElementAutoFillButtonEnabled;
- (char)isTextField;
- (id)renderedImageWithOptions:(unsigned int)a0;
- (void)setHTMLInputElementAutoFillButtonEnabledWithButtonType:(long long)a0;

@end
