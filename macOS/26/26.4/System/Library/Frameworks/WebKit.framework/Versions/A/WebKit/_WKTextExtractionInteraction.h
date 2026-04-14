@class NSString;

@interface _WKTextExtractionInteraction : NSObject {
    struct RetainPtr<NSString> { NSString *m_ptr; } _nodeIdentifier;
    struct RetainPtr<NSString> { NSString *m_ptr; } _text;
}

@property (readonly, nonatomic) BOOL hasSetLocation;
@property (readonly, nonatomic) long long action;
@property (copy, nonatomic) NSString *nodeIdentifier;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL replaceAll;
@property (nonatomic) BOOL scrollToVisible;
@property (nonatomic) struct CGSize { double width; double height; } scrollDelta;
@property (nonatomic) struct CGPoint { double x; double y; } location;

- (id)initWithAction:(long long)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)debugDescriptionInWebView:(id)a0 completionHandler:(id /* block */)a1;

@end
